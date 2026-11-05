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

// Function: sub_00168008
// Address: 0x168008 - 0x168098
void sub_00168008_0x168008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168008_0x168008");
#endif

    switch (ctx->pc) {
        case 0x168030u: goto label_168030;
        case 0x16803cu: goto label_16803c;
        case 0x168048u: goto label_168048;
        case 0x168054u: goto label_168054;
        case 0x168060u: goto label_168060;
        case 0x168070u: goto label_168070;
        case 0x16807cu: goto label_16807c;
        default: break;
    }

    ctx->pc = 0x168008u;

    // 0x168008: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x168008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16800c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16800cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168010: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168014: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x168014u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168018: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16801c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16801cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168020: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x168020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x168024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168028: 0xc046002  jal         func_118008
    ctx->pc = 0x168028u;
    SET_GPR_U32(ctx, 31, 0x168030u);
    ctx->pc = 0x16802Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168028u;
    // 0x16802c: 0xae260218  sw          $a2, 0x218($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 536), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118008u, 0x168028u, 0x168030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168030u;
label_168030:
    // 0x168030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168034: 0xc0461fe  jal         func_1187F8
    ctx->pc = 0x168034u;
    SET_GPR_U32(ctx, 31, 0x16803Cu);
    ctx->pc = 0x168038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168034u;
    // 0x168038: 0xae22032c  sw          $v0, 0x32C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 812), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1187F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1187F8u, 0x168034u, 0x16803Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16803Cu;
label_16803c:
    // 0x16803c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16803cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168040: 0xc0462dc  jal         func_118B70
    ctx->pc = 0x168040u;
    SET_GPR_U32(ctx, 31, 0x168048u);
    ctx->pc = 0x168044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168040u;
    // 0x168044: 0xae220334  sw          $v0, 0x334($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 820), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118B70u, 0x168040u, 0x168048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168048u;
label_168048:
    // 0x168048: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x168048u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16804c: 0xc0460e4  jal         func_118390
    ctx->pc = 0x16804Cu;
    SET_GPR_U32(ctx, 31, 0x168054u);
    ctx->pc = 0x168050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16804Cu;
    // 0x168050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x16804Cu, 0x168054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168054u;
label_168054:
    // 0x168054: 0xae220330  sw          $v0, 0x330($s1)
    ctx->pc = 0x168054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 2));
    // 0x168058: 0xc045eee  jal         func_117BB8
    ctx->pc = 0x168058u;
    SET_GPR_U32(ctx, 31, 0x168060u);
    ctx->pc = 0x16805Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168058u;
    // 0x16805c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BB8u, 0x168058u, 0x168060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168060u;
label_168060:
    // 0x168060: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x168060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x168064: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x168064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168068: 0xc042136  jal         func_1084D8
    ctx->pc = 0x168068u;
    SET_GPR_U32(ctx, 31, 0x168070u);
    ctx->pc = 0x16806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168068u;
    // 0x16806c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084D8u, 0x168068u, 0x168070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x168070u;
label_168070:
    // 0x168070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x168070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168074: 0xc05a38e  jal         func_168E38
    ctx->pc = 0x168074u;
    SET_GPR_U32(ctx, 31, 0x16807Cu);
    ctx->pc = 0x168078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168074u;
    // 0x168078: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x168E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x168E38u, 0x168074u, 0x16807Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16807Cu;
label_16807c:
    // 0x16807c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16807cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168080: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168084: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168088: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x168088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16808c: 0x3e00008  jr          $ra
    ctx->pc = 0x16808Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16808Cu;
        // 0x168090: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16808Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168094u;
    // 0x168094: 0x0  nop
    ctx->pc = 0x168094u;
    // NOP
    ctx->pc = 0x168098u;
}
