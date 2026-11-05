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

// Function: sub_002DC6F8
// Address: 0x2dc6f8 - 0x2dc780
void sub_002DC6F8_0x2dc6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC6F8_0x2dc6f8");
#endif

    switch (ctx->pc) {
        case 0x2dc774u: goto label_2dc774;
        default: break;
    }

    ctx->pc = 0x2dc6f8u;

    // 0x2dc6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dc6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dc6fc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2dc6fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dc700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2dc704: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2dc704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2dc708: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2dc708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x2dc70c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2DC70Cu;
    {
        const bool branch_taken_0x2dc70c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC70Cu;
        // 0x2dc710: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc70c) {
            ctx->pc = 0x2DC778u;
            goto label_2dc778;
        }
    }
    ctx->pc = 0x2DC714u;
    // 0x2dc714: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x2dc714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc718: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dc718u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc71c: 0x0  nop
    ctx->pc = 0x2dc71cu;
    // NOP
    // 0x2dc720: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2dc720u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2dc724: 0x0  nop
    ctx->pc = 0x2dc724u;
    // NOP
    // 0x2dc728: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x2DC728u;
    {
        const bool branch_taken_0x2dc728 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DC72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC728u;
        // 0x2dc72c: 0x24c20030  addiu       $v0, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc728) {
            ctx->pc = 0x2DC778u;
            goto label_2dc778;
        }
    }
    ctx->pc = 0x2DC730u;
    // 0x2dc730: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dc730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2dc734: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dc734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2dc738: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x2dc738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2dc73c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2dc73cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2dc740: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2dc740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2dc744: 0xc4c10030  lwc1        $f1, 0x30($a2)
    ctx->pc = 0x2dc744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2dc748: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2dc748u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc74c: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2dc74cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2dc750: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x2dc750u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2dc754: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dc754u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2dc758: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x2dc758u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2dc75c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2dc75cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2dc760: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2dc760u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2dc764: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2dc764u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dc768: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2dc768u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2dc76c: 0xc0b7264  jal         func_2DC990
    ctx->pc = 0x2DC76Cu;
    SET_GPR_U32(ctx, 31, 0x2DC774u);
    ctx->pc = 0x2DC770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC76Cu;
    // 0x2dc770: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC990u, 0x2DC76Cu, 0x2DC774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC774u;
label_2dc774:
    // 0x2dc774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dc774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dc778:
    // 0x2dc778: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC778u;
        // 0x2dc77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC780u;
}
