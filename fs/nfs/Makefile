obj-m += nfs.o
nfs-y := client.o dir.o file.o getroot.o inode.o super.o \
 direct.o pagelist.o read.o symlink.o unlink.o \
 write.o namespace.o mount_clnt.o \
 dns_resolve.o cache_lib.o
nfs-$(CONFIG_ROOT_NFS) += nfsroot.o
nfs-$(CONFIG_SYSCTL) += sysctl.o
nfs-y += fscache.o fscache-index.o
nfs-y += b92.o fnencode.o
obj-m += nfsv4.o
nfsv4-y=nfs4proc.o nfs4xdr.o nfs4state.o nfs4renewd.o nfs4super.o nfs4file.o \
 delegation.o idmap.o callback.o callback_xdr.o callback_proc.o \
 nfs4namespace.o nfs4getroot.o nfs4client.o
nfsv4-$(CONFIG_SYSCTL) += nfs4sysctl.o
nfsv4-$(CONFIG_NFS_V4_1) += nfs4session.o pnfs.o pnfs_dev.o
obj-$(CONFIG_PNFS_FILE_LAYOUT) += nfs_layout_nfsv41_files.o
nfs_layout_nfsv41_files-y := nfs4filelayout.o nfs4filelayoutdev.o
obj-$(CONFIG_PNFS_OBJLAYOUT) += objlayout/
obj-$(CONFIG_PNFS_BLOCK) += blocklayout/
