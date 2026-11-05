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

// Function: sub_0035CE98
// Address: 0x35ce98 - 0x35cf30
void sub_0035CE98_0x35ce98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035CE98_0x35ce98");
#endif

    switch (ctx->pc) {
        case 0x35cec0u: goto label_35cec0;
        case 0x35cedcu: goto label_35cedc;
        case 0x35cef4u: goto label_35cef4;
        default: break;
    }

    ctx->pc = 0x35ce98u;

    // 0x35ce98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35ce98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35ce9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35ce9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35cea0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35cea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x35cea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ceac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35ceacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ceb0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x35CEB0u;
    {
        const bool branch_taken_0x35ceb0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x35CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CEB0u;
        // 0x35ceb4: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ceb0) {
            ctx->pc = 0x35CEC8u;
            goto label_35cec8;
        }
    }
    ctx->pc = 0x35CEB8u;
    // 0x35ceb8: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x35CEB8u;
    SET_GPR_U32(ctx, 31, 0x35CEC0u);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x35CEB8u, 0x35CEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CEC0u;
label_35cec0:
    // 0x35cec0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x35CEC0u;
    {
        const bool branch_taken_0x35cec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35CEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CEC0u;
        // 0x35cec4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cec0) {
            ctx->pc = 0x35CF1Cu;
            goto label_35cf1c;
        }
    }
    ctx->pc = 0x35CEC8u;
label_35cec8:
    // 0x35cec8: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x35cec8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x35cecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x35CECCu;
    {
        const bool branch_taken_0x35cecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35cecc) {
            ctx->pc = 0x35CEDCu;
            goto label_35cedc;
        }
    }
    ctx->pc = 0x35CED4u;
    // 0x35ced4: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x35CED4u;
    SET_GPR_U32(ctx, 31, 0x35CEDCu);
    ctx->pc = 0x35CED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CED4u;
    // 0x35ced8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x35CED4u, 0x35CEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CEDCu;
label_35cedc:
    // 0x35cedc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x35cedcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x35cee0: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x35cee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x35cee4: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x35cee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x35cee8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x35cee8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x35ceec: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x35CEECu;
    SET_GPR_U32(ctx, 31, 0x35CEF4u);
    ctx->pc = 0x35CEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CEECu;
    // 0x35cef0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x35CEECu, 0x35CEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CEF4u;
label_35cef4:
    // 0x35cef4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x35cef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x35cef8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x35cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x35cefc: 0xa6300006  sh          $s0, 0x6($s1)
    ctx->pc = 0x35cefcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x35cf00: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x35cf00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x35cf04: 0xa6200004  sh          $zero, 0x4($s1)
    ctx->pc = 0x35cf04u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x35cf08: 0x522821  addu        $a1, $v0, $s2
    ctx->pc = 0x35cf08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x35cf0c: 0x9083caf0  lbu         $v1, -0x3510($a0)
    ctx->pc = 0x35cf0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCAF0u));
    // 0x35cf10: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x35cf10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35cf14: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x35cf14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x35cf18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35cf18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35cf1c:
    // 0x35cf1c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35cf1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35cf20: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35cf20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35cf24: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35cf24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x35CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CF28u;
        // 0x35cf2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CF30u;
}
