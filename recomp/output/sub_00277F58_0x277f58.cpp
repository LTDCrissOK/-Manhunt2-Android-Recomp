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

// Function: sub_00277F58
// Address: 0x277f58 - 0x277fd0
void sub_00277F58_0x277f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277F58_0x277f58");
#endif

    switch (ctx->pc) {
        case 0x277f9cu: goto label_277f9c;
        default: break;
    }

    ctx->pc = 0x277f58u;

    // 0x277f58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277f5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277f60: 0x37a80008  ori         $t0, $sp, 0x8
    ctx->pc = 0x277f60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x277f64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x277f68: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x277f68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f6c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x277f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277f70: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x277f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x277f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x277f78: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277f78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f7c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277f80: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277f80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277f84: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x277f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x277f88: 0x24a582f8  addiu       $a1, $a1, -0x7D08
    ctx->pc = 0x277f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935288));
    // 0x277f8c: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x277f8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x277f90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x277f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277f94: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277F94u;
    SET_GPR_U32(ctx, 31, 0x277F9Cu);
    ctx->pc = 0x277F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277F94u;
    // 0x277f98: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277F94u, 0x277F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277F9Cu;
label_277f9c:
    // 0x277f9c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x277f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277fa0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x277fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x277fa4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x277fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x277fa8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277fa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277fac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x277facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277fb0: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x277fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x277fb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x277fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x277fb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x277fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277fbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x277fbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277fc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x277fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x277FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FC4u;
        // 0x277fc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277FCCu;
    // 0x277fcc: 0x0  nop
    ctx->pc = 0x277fccu;
    // NOP
    ctx->pc = 0x277fd0u;
}
