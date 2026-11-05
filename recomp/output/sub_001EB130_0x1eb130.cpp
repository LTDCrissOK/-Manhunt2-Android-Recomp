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

// Function: sub_001EB130
// Address: 0x1eb130 - 0x1eb1a0
void sub_001EB130_0x1eb130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB130_0x1eb130");
#endif

    switch (ctx->pc) {
        case 0x1eb158u: goto label_1eb158;
        case 0x1eb160u: goto label_1eb160;
        case 0x1eb184u: goto label_1eb184;
        default: break;
    }

    ctx->pc = 0x1eb130u;

    // 0x1eb130: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eb130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eb134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eb134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eb138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eb138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eb13c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1eb13cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eb140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1eb144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eb144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eb148: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1eb148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1eb14c: 0x24120050  addiu       $s2, $zero, 0x50
    ctx->pc = 0x1eb14cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1eb150: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x1eb150u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1eb154: 0x0  nop
    ctx->pc = 0x1eb154u;
    // NOP
label_1eb158:
    // 0x1eb158: 0xc07abea  jal         func_1EAFA8
    ctx->pc = 0x1EB158u;
    SET_GPR_U32(ctx, 31, 0x1EB160u);
    ctx->pc = 0x1EB15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB158u;
    // 0x1eb15c: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFA8u, 0x1EB158u, 0x1EB160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB160u;
label_1eb160:
    // 0x1eb160: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1eb160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1eb164: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1eb164u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1eb168: 0x2e03001e  sltiu       $v1, $s0, 0x1E
    ctx->pc = 0x1eb168u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x1eb16c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1EB16Cu;
    {
        const bool branch_taken_0x1eb16c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EB170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB16Cu;
        // 0x1eb170: 0x2121018  mult        $v0, $s0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eb16c) {
            ctx->pc = 0x1EB158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eb158;
        }
    }
    ctx->pc = 0x1EB174u;
    // 0x1eb174: 0xa2200960  sb          $zero, 0x960($s1)
    ctx->pc = 0x1eb174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2400), (uint8_t)GPR_U32(ctx, 0));
    // 0x1eb178: 0x26240970  addiu       $a0, $s1, 0x970
    ctx->pc = 0x1eb178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2416));
    // 0x1eb17c: 0xc07abea  jal         func_1EAFA8
    ctx->pc = 0x1EB17Cu;
    SET_GPR_U32(ctx, 31, 0x1EB184u);
    ctx->pc = 0x1EB180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB17Cu;
    // 0x1eb180: 0xa2200961  sb          $zero, 0x961($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 2401), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFA8u, 0x1EB17Cu, 0x1EB184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EB184u;
label_1eb184:
    // 0x1eb184: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eb184u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eb188: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eb188u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1eb18c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eb18cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1eb190: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1eb190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1eb194: 0x3e00008  jr          $ra
    ctx->pc = 0x1EB194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB194u;
        // 0x1eb198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EB194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EB19Cu;
    // 0x1eb19c: 0x0  nop
    ctx->pc = 0x1eb19cu;
    // NOP
    ctx->pc = 0x1eb1a0u;
}
