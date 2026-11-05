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

// Function: sub_002BB0B8
// Address: 0x2bb0b8 - 0x2bb150
void sub_002BB0B8_0x2bb0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB0B8_0x2bb0b8");
#endif

    switch (ctx->pc) {
        case 0x2bb0ecu: goto label_2bb0ec;
        case 0x2bb100u: goto label_2bb100;
        case 0x2bb11cu: goto label_2bb11c;
        default: break;
    }

    ctx->pc = 0x2bb0b8u;

    // 0x2bb0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bb0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bb0c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bb0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bb0c4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bb0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bb0c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bb0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2bb0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2bb0d0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2bb0d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb0d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB0D4u;
    {
        const bool branch_taken_0x2bb0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0D4u;
        // 0x2bb0d8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0d4) {
            ctx->pc = 0x2BB0E4u;
            goto label_2bb0e4;
        }
    }
    ctx->pc = 0x2BB0DCu;
    // 0x2bb0dc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2BB0DCu;
    {
        const bool branch_taken_0x2bb0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0DCu;
        // 0x2bb0e0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0dc) {
            ctx->pc = 0x2BB138u;
            goto label_2bb138;
        }
    }
    ctx->pc = 0x2BB0E4u;
label_2bb0e4:
    // 0x2bb0e4: 0xc0aec0c  jal         func_2BB030
    ctx->pc = 0x2BB0E4u;
    SET_GPR_U32(ctx, 31, 0x2BB0ECu);
    ctx->pc = 0x2BB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB0E4u;
    // 0x2bb0e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB030u, 0x2BB0E4u, 0x2BB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB0ECu;
label_2bb0ec:
    // 0x2bb0ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2bb0ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb0f0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2bb0f0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb0f4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BB0F4u;
    {
        const bool branch_taken_0x2bb0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB0F4u;
        // 0x2bb0f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb0f4) {
            ctx->pc = 0x2BB138u;
            goto label_2bb138;
        }
    }
    ctx->pc = 0x2BB0FCu;
    // 0x2bb0fc: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x2bb0fcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_2bb100:
    // 0x2bb100: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x2bb100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb104: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB104u;
    {
        const bool branch_taken_0x2bb104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bb104) {
            ctx->pc = 0x2BB108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB104u;
            // 0x2bb108: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB128u;
            goto label_2bb128;
        }
    }
    ctx->pc = 0x2BB10Cu;
    // 0x2bb10c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bb10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb110: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bb110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb114: 0xc0aec18  jal         func_2BB060
    ctx->pc = 0x2BB114u;
    SET_GPR_U32(ctx, 31, 0x2BB11Cu);
    ctx->pc = 0x2BB118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB114u;
    // 0x2bb118: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB060u, 0x2BB114u, 0x2BB11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB11Cu;
label_2bb11c:
    // 0x2bb11c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB11Cu;
    {
        const bool branch_taken_0x2bb11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB11Cu;
        // 0x2bb120: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb11c) {
            ctx->pc = 0x2BB138u;
            goto label_2bb138;
        }
    }
    ctx->pc = 0x2BB124u;
    // 0x2bb124: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2bb124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2bb128:
    // 0x2bb128: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x2bb128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bb12c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x2BB12Cu;
    {
        const bool branch_taken_0x2bb12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bb12c) {
            ctx->pc = 0x2BB130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BB12Cu;
            // 0x2bb130: 0x96030000  lhu         $v1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BB100u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb100;
        }
    }
    ctx->pc = 0x2BB134u;
    // 0x2bb134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bb134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bb138:
    // 0x2bb138: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bb138u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb13c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2bb13cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bb140: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2bb140u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb144: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2bb144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2bb148: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB148u;
        // 0x2bb14c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB150u;
}
