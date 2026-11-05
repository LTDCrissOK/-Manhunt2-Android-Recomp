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

// Function: sub_00236FD8
// Address: 0x236fd8 - 0x237058
void sub_00236FD8_0x236fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236FD8_0x236fd8");
#endif

    switch (ctx->pc) {
        case 0x237014u: goto label_237014;
        case 0x23702cu: goto label_23702c;
        case 0x237044u: goto label_237044;
        default: break;
    }

    ctx->pc = 0x236fd8u;

    // 0x236fd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236fdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x236fe0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x236fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x236fe4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236fe8: 0x8e030338  lw          $v1, 0x338($s0)
    ctx->pc = 0x236fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x236fec: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x236fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x236ff0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x236FF0u;
    {
        const bool branch_taken_0x236ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236ff0) {
            ctx->pc = 0x236FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236FF0u;
            // 0x236ff4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237048u;
            goto label_237048;
        }
    }
    ctx->pc = 0x236FF8u;
    // 0x236ff8: 0x9202047d  lbu         $v0, 0x47D($s0)
    ctx->pc = 0x236ff8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1149)));
    // 0x236ffc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x236FFCu;
    {
        const bool branch_taken_0x236ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236ffc) {
            ctx->pc = 0x237000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236FFCu;
            // 0x237000: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237048u;
            goto label_237048;
        }
    }
    ctx->pc = 0x237004u;
    // 0x237004: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x237004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
    // 0x237008: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x237008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23700c: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x23700Cu;
    SET_GPR_U32(ctx, 31, 0x237014u);
    ctx->pc = 0x237010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23700Cu;
    // 0x237010: 0x8e050424  lw          $a1, 0x424($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x23700Cu, 0x237014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237014u;
label_237014:
    // 0x237014: 0x8e03036c  lw          $v1, 0x36C($s0)
    ctx->pc = 0x237014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x237018: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x237018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x23701c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x23701Cu;
    {
        const bool branch_taken_0x23701c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23701c) {
            ctx->pc = 0x237020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23701Cu;
            // 0x237020: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237048u;
            goto label_237048;
        }
    }
    ctx->pc = 0x237024u;
    // 0x237024: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x237024u;
    SET_GPR_U32(ctx, 31, 0x23702Cu);
    ctx->pc = 0x237028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x237024u;
    // 0x237028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x237024u, 0x23702Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23702Cu;
label_23702c:
    // 0x23702c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x23702Cu;
    {
        const bool branch_taken_0x23702c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23702c) {
            ctx->pc = 0x237030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23702Cu;
            // 0x237030: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237048u;
            goto label_237048;
        }
    }
    ctx->pc = 0x237034u;
    // 0x237034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x237038: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x237038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x23703c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x23703Cu;
    SET_GPR_U32(ctx, 31, 0x237044u);
    ctx->pc = 0x237040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23703Cu;
    // 0x237040: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23703Cu, 0x237044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x237044u;
label_237044:
    // 0x237044: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x237044u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_237048:
    // 0x237048: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x237048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x23704c: 0x3e00008  jr          $ra
    ctx->pc = 0x23704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23704Cu;
        // 0x237050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23704Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x237054u;
    // 0x237054: 0x0  nop
    ctx->pc = 0x237054u;
    // NOP
    ctx->pc = 0x237058u;
}
