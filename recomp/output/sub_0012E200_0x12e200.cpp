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

// Function: sub_0012E200
// Address: 0x12e200 - 0x12e288
void sub_0012E200_0x12e200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E200_0x12e200");
#endif

    switch (ctx->pc) {
        case 0x12e224u: goto label_12e224;
        case 0x12e234u: goto label_12e234;
        case 0x12e240u: goto label_12e240;
        case 0x12e250u: goto label_12e250;
        case 0x12e25cu: goto label_12e25c;
        case 0x12e270u: goto label_12e270;
        default: break;
    }

    ctx->pc = 0x12e200u;

    // 0x12e200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12e200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12e204: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x12e204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12e208: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x12e208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x12e20c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12e20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e210: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12e210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e214: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12e214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12e218: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x12e218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x12e21c: 0xc04b51a  jal         func_12D468
    ctx->pc = 0x12E21Cu;
    SET_GPR_U32(ctx, 31, 0x12E224u);
    ctx->pc = 0x12E220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E21Cu;
    // 0x12e220: 0x24050405  addiu       $a1, $zero, 0x405 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D468u, 0x12E21Cu, 0x12E224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E224u;
label_12e224:
    // 0x12e224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12e224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e228: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x12e228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x12e22c: 0xc045edc  jal         func_117B70
    ctx->pc = 0x12E22Cu;
    SET_GPR_U32(ctx, 31, 0x12E234u);
    ctx->pc = 0x12E230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E22Cu;
    // 0x12e230: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x12E22Cu, 0x12E234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E234u;
label_12e234:
    // 0x12e234: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12e234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e238: 0xc045f1a  jal         func_117C68
    ctx->pc = 0x12E238u;
    SET_GPR_U32(ctx, 31, 0x12E240u);
    ctx->pc = 0x12E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E238u;
    // 0x12e23c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C68u, 0x12E238u, 0x12E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E240u;
label_12e240:
    // 0x12e240: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x12e240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12e244: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12e244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e248: 0xc046044  jal         func_118110
    ctx->pc = 0x12E248u;
    SET_GPR_U32(ctx, 31, 0x12E250u);
    ctx->pc = 0x12E24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E248u;
    // 0x12e24c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x12E248u, 0x12E250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E250u;
label_12e250:
    // 0x12e250: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x12e250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e254: 0xc046030  jal         func_1180C0
    ctx->pc = 0x12E254u;
    SET_GPR_U32(ctx, 31, 0x12E25Cu);
    ctx->pc = 0x12E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E254u;
    // 0x12e258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1180C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1180C0u, 0x12E254u, 0x12E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E25Cu;
label_12e25c:
    // 0x12e25c: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x12e25cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x12e260: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x12e260u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e264: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x12e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x12e268: 0xc04c662  jal         func_131988
    ctx->pc = 0x12E268u;
    SET_GPR_U32(ctx, 31, 0x12E270u);
    ctx->pc = 0x12E26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12E268u;
    // 0x12e26c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131988u, 0x12E268u, 0x12E270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12E270u;
label_12e270:
    // 0x12e270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12e270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12e274: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x12e274u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12e278: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x12e278u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e27c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12e27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12e280: 0x3e00008  jr          $ra
    ctx->pc = 0x12E280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12E280u;
        // 0x12e284: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12E280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12E288u;
}
