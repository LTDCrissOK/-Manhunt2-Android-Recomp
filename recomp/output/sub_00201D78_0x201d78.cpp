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

// Function: sub_00201D78
// Address: 0x201d78 - 0x201e18
void sub_00201D78_0x201d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201D78_0x201d78");
#endif

    switch (ctx->pc) {
        case 0x201dfcu: goto label_201dfc;
        case 0x201e0cu: goto label_201e0c;
        default: break;
    }

    ctx->pc = 0x201d78u;

    // 0x201d78: 0x54080  sll         $t0, $a1, 2
    ctx->pc = 0x201d78u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x201d7c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201d7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201d80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201d84: 0x248301f4  addiu       $v1, $a0, 0x1F4
    ctx->pc = 0x201d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 500));
    // 0x201d88: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x201d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201d8c: 0x683021  addu        $a2, $v1, $t0
    ctx->pc = 0x201d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x201d90: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x201d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201d94: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x201D94u;
    {
        const bool branch_taken_0x201d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201D94u;
        // 0x201d98: 0x2ca2010f  sltiu       $v0, $a1, 0x10F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)271) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201d94) {
            ctx->pc = 0x201E0Cu;
            goto label_201e0c;
        }
    }
    ctx->pc = 0x201D9Cu;
    // 0x201d9c: 0x24a7fe98  addiu       $a3, $a1, -0x168
    ctx->pc = 0x201d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966936));
    // 0x201da0: 0xa2380b  movn        $a3, $a1, $v0
    ctx->pc = 0x201da0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x201da4: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x201da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x201da8: 0xac6702dc  sw          $a3, 0x2DC($v1)
    ctx->pc = 0x201da8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 732), GPR_U32(ctx, 7));
    // 0x201dac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x201dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201db0: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x201db0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x201db4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201DB4u;
    {
        const bool branch_taken_0x201db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x201DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DB4u;
        // 0x201db8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x201db4) {
            ctx->pc = 0x201DD8u;
            goto label_201dd8;
        }
    }
    ctx->pc = 0x201DBCu;
    // 0x201dbc: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x201DBCu;
    {
        const bool branch_taken_0x201dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DBCu;
        // 0x201dc0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dbc) {
            ctx->pc = 0x201E10u;
            goto label_201e10;
        }
    }
    ctx->pc = 0x201DC4u;
    // 0x201dc4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x201dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x201dc8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x201DC8u;
    {
        const bool branch_taken_0x201dc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x201dc8) {
            ctx->pc = 0x201E04u;
            goto label_201e04;
        }
    }
    ctx->pc = 0x201DD0u;
    // 0x201dd0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x201DD0u;
    {
        const bool branch_taken_0x201dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x201dd0) {
            ctx->pc = 0x201E10u;
            goto label_201e10;
        }
    }
    ctx->pc = 0x201DD8u;
label_201dd8:
    // 0x201dd8: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x201dd8u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201ddc: 0x0  nop
    ctx->pc = 0x201ddcu;
    // NOP
    // 0x201de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x201de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x201de4: 0x3c013c36  lui         $at, 0x3C36
    ctx->pc = 0x201de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15414 << 16));
    // 0x201de8: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x201de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x201dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x201decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x201df0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x201df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x201df4: 0xc0828c0  jal         func_20A300
    ctx->pc = 0x201DF4u;
    SET_GPR_U32(ctx, 31, 0x201DFCu);
    ctx->pc = 0x201DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201DF4u;
    // 0x201df8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A300u, 0x201DF4u, 0x201DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201DFCu;
label_201dfc:
    // 0x201dfc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x201DFCu;
    {
        const bool branch_taken_0x201dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201DFCu;
        // 0x201e00: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201dfc) {
            ctx->pc = 0x201E10u;
            goto label_201e10;
        }
    }
    ctx->pc = 0x201E04u;
label_201e04:
    // 0x201e04: 0xc0828d0  jal         func_20A340
    ctx->pc = 0x201E04u;
    SET_GPR_U32(ctx, 31, 0x201E0Cu);
    ctx->pc = 0x201E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E04u;
    // 0x201e08: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A340u, 0x201E04u, 0x201E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201E0Cu;
label_201e0c:
    // 0x201e0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201e0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201e10:
    // 0x201e10: 0x3e00008  jr          $ra
    ctx->pc = 0x201E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E10u;
        // 0x201e14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201E10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201E18u;
}
