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

// Function: sub_0027C0C0
// Address: 0x27c0c0 - 0x27c178
void sub_0027C0C0_0x27c0c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C0C0_0x27c0c0");
#endif

    switch (ctx->pc) {
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c108u: goto label_27c108;
        case 0x27c11cu: goto label_27c11c;
        default: break;
    }

    ctx->pc = 0x27c0c0u;

    // 0x27c0c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27c0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x27c0c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27c0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27c0c8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27c0cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x27c0ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0d0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27c0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x27c0d4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x27c0d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27c0dc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x27c0dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27c0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27c0e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27c0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27c0ec: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27c0ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27c0f0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x27C0F0u;
    SET_GPR_U32(ctx, 31, 0x27C0F8u);
    ctx->pc = 0x27C0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C0F0u;
    // 0x27c0f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27C0F0u, 0x27C0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C0F8u;
label_27c0f8:
    // 0x27c0f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27c0f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0fc: 0x1a400010  blez        $s2, . + 4 + (0x10 << 2)
    ctx->pc = 0x27C0FCu;
    {
        const bool branch_taken_0x27c0fc = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x27C100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C0FCu;
        // 0x27c100: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0fc) {
            ctx->pc = 0x27C140u;
            goto label_27c140;
        }
    }
    ctx->pc = 0x27C104u;
    // 0x27c104: 0x0  nop
    ctx->pc = 0x27c104u;
    // NOP
label_27c108:
    // 0x27c108: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x27c108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27c10c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x27c10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c110: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x27c110u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27c114: 0xc09efc8  jal         func_27BF20
    ctx->pc = 0x27C114u;
    SET_GPR_U32(ctx, 31, 0x27C11Cu);
    ctx->pc = 0x27C118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27C114u;
    // 0x27c118: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BF20u, 0x27C114u, 0x27C11Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C11Cu;
label_27c11c:
    // 0x27c11c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x27c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x27c120: 0x212202a  slt         $a0, $s0, $s2
    ctx->pc = 0x27c120u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x27c124: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27c124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27c128: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x27c128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x27c12c: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x27c12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x27c130: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x27c130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27c134: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x27c134u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x27c138: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x27C138u;
    {
        const bool branch_taken_0x27c138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C138u;
        // 0x27c13c: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c138) {
            ctx->pc = 0x27C108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27c108;
        }
    }
    ctx->pc = 0x27C140u;
label_27c140:
    // 0x27c140: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x27c140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x27c144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27c144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27c148: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x27c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x27c14c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27c14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27c150: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27c150u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27c154: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27c154u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27c158: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27c158u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27c15c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27c15cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27c160: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27c160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27c164: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x27c164u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x27c168: 0x3e00008  jr          $ra
    ctx->pc = 0x27C168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27C168u;
        // 0x27c16c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27C168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27C170u;
    // 0x27c170: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27c174: 0x0  nop
    ctx->pc = 0x27c174u;
    // NOP
    ctx->pc = 0x27c178u;
}
