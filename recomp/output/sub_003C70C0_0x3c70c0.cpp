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

// Function: sub_003C70C0
// Address: 0x3c70c0 - 0x3c7140
void sub_003C70C0_0x3c70c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C70C0_0x3c70c0");
#endif

    switch (ctx->pc) {
        case 0x3c7100u: goto label_3c7100;
        case 0x3c7120u: goto label_3c7120;
        default: break;
    }

    ctx->pc = 0x3c70c0u;

    // 0x3c70c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3c70c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3c70c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3c70c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3c70c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c70c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3c70cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3c70ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c70d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3c70d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3c70d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c70d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c70d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3c70d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3c70dc: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c70dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c70e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3c70e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3c70e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C70E4u;
    {
        const bool branch_taken_0x3c70e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C70E4u;
        // 0x3c70e8: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c70e4) {
            ctx->pc = 0x3C7100u;
            goto label_3c7100;
        }
    }
    ctx->pc = 0x3C70ECu;
    // 0x3c70ec: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3c70ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c70f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c70f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c70f4: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3c70f4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3c70f8: 0xc0f24d8  jal         func_3C9360
    ctx->pc = 0x3C70F8u;
    SET_GPR_U32(ctx, 31, 0x3C7100u);
    ctx->pc = 0x3C70FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C70F8u;
    // 0x3c70fc: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9360u, 0x3C70F8u, 0x3C7100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7100u;
label_3c7100:
    // 0x3c7100: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x3c7100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3c7104: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3c7104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7108: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x3c7108u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x3c710c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3c710cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7110: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x3c7110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x3c7114: 0x3042efff  andi        $v0, $v0, 0xEFFF
    ctx->pc = 0x3c7114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61439);
    // 0x3c7118: 0xc0f2520  jal         func_3C9480
    ctx->pc = 0x3C7118u;
    SET_GPR_U32(ctx, 31, 0x3C7120u);
    ctx->pc = 0x3C711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C7118u;
    // 0x3c711c: 0xa602000c  sh          $v0, 0xC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9480u, 0x3C7118u, 0x3C7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C7120u;
label_3c7120:
    // 0x3c7120: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3c7120u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c7124: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3c7124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3c7128: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c7128u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3c712c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c712cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c7130: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3c7130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c7134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3c7134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c7138: 0x3e00008  jr          $ra
    ctx->pc = 0x3C7138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C7138u;
        // 0x3c713c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C7138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C7140u;
}
