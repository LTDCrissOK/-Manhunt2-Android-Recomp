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

// Function: sub_00277D08
// Address: 0x277d08 - 0x277d88
void sub_00277D08_0x277d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277D08_0x277d08");
#endif

    switch (ctx->pc) {
        case 0x277d4cu: goto label_277d4c;
        default: break;
    }

    ctx->pc = 0x277d08u;

    // 0x277d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277d0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x277d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x277d10: 0x37a80008  ori         $t0, $sp, 0x8
    ctx->pc = 0x277d10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x277d14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x277d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x277d18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x277d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d1c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x277d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x277d20: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x277d20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d24: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x277d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x277d28: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x277d28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277d30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277d30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277d34: 0x8c820114  lw          $v0, 0x114($a0)
    ctx->pc = 0x277d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
    // 0x277d38: 0x24a582f8  addiu       $a1, $a1, -0x7D08
    ctx->pc = 0x277d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935288));
    // 0x277d3c: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x277d3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x277d40: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x277d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x277d44: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277D44u;
    SET_GPR_U32(ctx, 31, 0x277D4Cu);
    ctx->pc = 0x277D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277D44u;
    // 0x277d48: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277D44u, 0x277D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277D4Cu;
label_277d4c:
    // 0x277d4c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x277d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277d50: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x277d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x277d54: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x277d54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277d58: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x277d58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x277d5c: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x277d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x277d60: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x277d60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x277d64: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x277d64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x277d68: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x277d68u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x277d6c: 0xa2440000  sb          $a0, 0x0($s2)
    ctx->pc = 0x277d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x277d70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x277d70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277d74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x277d74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x277d78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x277d78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277d7c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x277d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x277d80: 0x3e00008  jr          $ra
    ctx->pc = 0x277D80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277D80u;
        // 0x277d84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277D80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277D88u;
}
