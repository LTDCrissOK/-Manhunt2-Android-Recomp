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

// Function: sub_00152830
// Address: 0x152830 - 0x1528b0
void sub_00152830_0x152830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152830_0x152830");
#endif

    switch (ctx->pc) {
        case 0x1528a4u: goto label_1528a4;
        default: break;
    }

    ctx->pc = 0x152830u;

    // 0x152830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x152830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x152834: 0x3c080049  lui         $t0, 0x49
    ctx->pc = 0x152834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)73 << 16));
    // 0x152838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x152838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15283c: 0x25089a08  addiu       $t0, $t0, -0x65F8
    ctx->pc = 0x15283cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941192));
    // 0x152840: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x152840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152844: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x152844u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152848: 0x8c830968  lw          $v1, 0x968($a0)
    ctx->pc = 0x152848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
    // 0x15284c: 0x9082046c  lbu         $v0, 0x46C($a0)
    ctx->pc = 0x15284cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x152850: 0x8c690104  lw          $t1, 0x104($v1)
    ctx->pc = 0x152850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x152854: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x152854u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x152858: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x152858u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15285c: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x15285cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x152860: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x152860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x152864: 0x24870060  addiu       $a3, $a0, 0x60
    ctx->pc = 0x152864u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x152868: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x152868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15286c: 0xc4810060  lwc1        $f1, 0x60($a0)
    ctx->pc = 0x15286cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x152870: 0xc4e20008  lwc1        $f2, 0x8($a3)
    ctx->pc = 0x152870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x152874: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x152874u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x152878: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x152878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15287c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x15287cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x152880: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x152880u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x152884: 0x1034021  addu        $t0, $t0, $v1
    ctx->pc = 0x152884u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x152888: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x152888u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x15288c: 0x8d04020c  lw          $a0, 0x20C($t0)
    ctx->pc = 0x15288cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 524)));
    // 0x152890: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x152890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x152894: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x152894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x152898: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x152898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x15289c: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x15289Cu;
    SET_GPR_U32(ctx, 31, 0x1528A4u);
    ctx->pc = 0x1528A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15289Cu;
    // 0x1528a0: 0xe7a20008  swc1        $f2, 0x8($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x15289Cu, 0x1528A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1528A4u;
label_1528a4:
    // 0x1528a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1528a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1528a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1528A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1528ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1528A8u;
        // 0x1528ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1528A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1528B0u;
}
