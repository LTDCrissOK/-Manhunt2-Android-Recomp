#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00324900
// Address: 0x324900 - 0x3249f0
void sub_00324900_0x324900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324900_0x324900");
#endif

    ctx->pc = 0x324900u;

    // 0x324900: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x324900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324904: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x324904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x324908: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x324908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x32490c: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x32490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x324910: 0xc4a40008  lwc1        $f4, 0x8($a1)
    ctx->pc = 0x324910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x324914: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x324914u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x324918: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x324918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32491c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x32491cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324920: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x324920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x324924: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x324924u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x324928: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x324928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x32492c: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x32492cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x324930: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x324930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x324934: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x324934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x324938: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x324938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32493c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x32493cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x324940: 0xc4880010  lwc1        $f8, 0x10($a0)
    ctx->pc = 0x324940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x324944: 0x46000981  sub.s       $f6, $f1, $f0
    ctx->pc = 0x324944u;
    ctx->f[6] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x324948: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x324948u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x32494c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x32494cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x324950: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x324950u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x324954: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x324954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324958: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x324958u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x32495c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x32495cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x324960: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x324960u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x324964: 0x460009c0  add.s       $f7, $f1, $f0
    ctx->pc = 0x324964u;
    ctx->f[7] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x324968: 0x46081036  c.le.s      $f2, $f8
    ctx->pc = 0x324968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32496c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x32496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x324970: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x324970u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x324974: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x324974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x324978: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x324978u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x32497c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x32497cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x324980: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x324980u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x324984: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x324984u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x324988: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x324988u;
    {
        const bool branch_taken_0x324988 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32498Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324988u;
        // 0x32498c: 0xe7a70018  swc1        $f7, 0x18($sp) (Delay Slot)
        { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x324988) {
            ctx->pc = 0x3249E8u;
            goto label_3249e8;
        }
    }
    ctx->pc = 0x324990u;
    // 0x324990: 0x46054036  c.le.s      $f8, $f5
    ctx->pc = 0x324990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x324994: 0x0  nop
    ctx->pc = 0x324994u;
    // NOP
    // 0x324998: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x324998u;
    {
        const bool branch_taken_0x324998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x324998) {
            ctx->pc = 0x3249E8u;
            goto label_3249e8;
        }
    }
    ctx->pc = 0x3249A0u;
    // 0x3249a0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3249a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249a4: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x3249a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3249a8: 0x0  nop
    ctx->pc = 0x3249a8u;
    // NOP
    // 0x3249ac: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x3249ACu;
    {
        const bool branch_taken_0x3249ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3249ac) {
            ctx->pc = 0x3249E8u;
            goto label_3249e8;
        }
    }
    ctx->pc = 0x3249B4u;
    // 0x3249b4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x3249b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3249b8: 0x0  nop
    ctx->pc = 0x3249b8u;
    // NOP
    // 0x3249bc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x3249BCu;
    {
        const bool branch_taken_0x3249bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3249bc) {
            ctx->pc = 0x3249E8u;
            goto label_3249e8;
        }
    }
    ctx->pc = 0x3249C4u;
    // 0x3249c4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3249c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3249c8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x3249c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3249cc: 0x0  nop
    ctx->pc = 0x3249ccu;
    // NOP
    // 0x3249d0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3249D0u;
    {
        const bool branch_taken_0x3249d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3249d0) {
            ctx->pc = 0x3249E8u;
            goto label_3249e8;
        }
    }
    ctx->pc = 0x3249D8u;
    // 0x3249d8: 0x46070036  c.le.s      $f0, $f7
    ctx->pc = 0x3249d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3249dc: 0x0  nop
    ctx->pc = 0x3249dcu;
    // NOP
    // 0x3249e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3249E0u;
    {
        const bool branch_taken_0x3249e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3249e0) {
            ctx->pc = 0x3249E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3249E0u;
            // 0x3249e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3249E8u;
            goto label_3249e8;
        }
    }
    ctx->pc = 0x3249E8u;
label_3249e8:
    // 0x3249e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3249E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3249ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3249E8u;
        // 0x3249ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3249E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3249F0u;
}
