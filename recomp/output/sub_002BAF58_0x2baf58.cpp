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

// Function: sub_002BAF58
// Address: 0x2baf58 - 0x2bafb8
void sub_002BAF58_0x2baf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAF58_0x2baf58");
#endif

    switch (ctx->pc) {
        case 0x2baf74u: goto label_2baf74;
        case 0x2baf98u: goto label_2baf98;
        default: break;
    }

    ctx->pc = 0x2baf58u;

    // 0x2baf58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2baf58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2baf5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2baf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2baf60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2baf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2baf64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2baf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2baf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2baf6c: 0xc0aebee  jal         func_2BAFB8
    ctx->pc = 0x2BAF6Cu;
    SET_GPR_U32(ctx, 31, 0x2BAF74u);
    ctx->pc = 0x2BAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF6Cu;
    // 0x2baf70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFB8u, 0x2BAF6Cu, 0x2BAF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF74u;
label_2baf74:
    // 0x2baf74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2baf74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf78: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAF78u;
    {
        const bool branch_taken_0x2baf78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAF78u;
        // 0x2baf7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baf78) {
            ctx->pc = 0x2BAF90u;
            goto label_2baf90;
        }
    }
    ctx->pc = 0x2BAF80u;
    // 0x2baf80: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2baf80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2baf84: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAF84u;
    {
        const bool branch_taken_0x2baf84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2baf84) {
            ctx->pc = 0x2BAF88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAF84u;
            // 0x2baf88: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAFA0u;
            goto label_2bafa0;
        }
    }
    ctx->pc = 0x2BAF8Cu;
    // 0x2baf8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2baf8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2baf90:
    // 0x2baf90: 0xc0aebb4  jal         func_2BAED0
    ctx->pc = 0x2BAF90u;
    SET_GPR_U32(ctx, 31, 0x2BAF98u);
    ctx->pc = 0x2BAF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAF90u;
    // 0x2baf94: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAED0u, 0x2BAF90u, 0x2BAF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAF98u;
label_2baf98:
    // 0x2baf98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2baf98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baf9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2baf9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bafa0:
    // 0x2bafa0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2bafa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bafa4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bafa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bafa8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bafa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bafac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAFACu;
        // 0x2bafb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAFB4u;
    // 0x2bafb4: 0x0  nop
    ctx->pc = 0x2bafb4u;
    // NOP
    ctx->pc = 0x2bafb8u;
}
