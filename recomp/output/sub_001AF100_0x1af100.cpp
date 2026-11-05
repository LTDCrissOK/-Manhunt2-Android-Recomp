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

// Function: sub_001AF100
// Address: 0x1af100 - 0x1af1e8
void sub_001AF100_0x1af100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF100_0x1af100");
#endif

    switch (ctx->pc) {
        case 0x1af120u: goto label_1af120;
        case 0x1af12cu: goto label_1af12c;
        case 0x1af13cu: goto label_1af13c;
        case 0x1af184u: goto label_1af184;
        case 0x1af1b8u: goto label_1af1b8;
        case 0x1af1ccu: goto label_1af1cc;
        default: break;
    }

    ctx->pc = 0x1af100u;

    // 0x1af100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af10c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af110: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af114: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1af114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1af118: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AF118u;
    SET_GPR_U32(ctx, 31, 0x1AF120u);
    ctx->pc = 0x1AF11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF118u;
    // 0x1af11c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AF118u, 0x1AF120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF120u;
label_1af120:
    // 0x1af120: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1af120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1af124: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1AF124u;
    SET_GPR_U32(ctx, 31, 0x1AF12Cu);
    ctx->pc = 0x1AF128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF124u;
    // 0x1af128: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1AF124u, 0x1AF12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF12Cu;
label_1af12c:
    // 0x1af12c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF12Cu;
    {
        const bool branch_taken_0x1af12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af12c) {
            ctx->pc = 0x1AF130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF12Cu;
            // 0x1af130: 0x8e03009c  lw          $v1, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF14Cu;
            goto label_1af14c;
        }
    }
    ctx->pc = 0x1AF134u;
    // 0x1af134: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1AF134u;
    SET_GPR_U32(ctx, 31, 0x1AF13Cu);
    ctx->pc = 0x1AF138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF134u;
    // 0x1af138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1AF134u, 0x1AF13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF13Cu;
label_1af13c:
    // 0x1af13c: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x1af13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
    // 0x1af140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af144: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1af144u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1af148: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1af148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1af14c:
    // 0x1af14c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1af14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1af150: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1af150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1af154: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF154u;
    {
        const bool branch_taken_0x1af154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af154) {
            ctx->pc = 0x1AF158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF154u;
            // 0x1af158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF17Cu;
            goto label_1af17c;
        }
    }
    ctx->pc = 0x1AF15Cu;
    // 0x1af15c: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1af15cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af160: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1af160u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1af164: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF164u;
    {
        const bool branch_taken_0x1af164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF164u;
        // 0x1af168: 0x24060101  addiu       $a2, $zero, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af164) {
            ctx->pc = 0x1AF178u;
            goto label_1af178;
        }
    }
    ctx->pc = 0x1AF16Cu;
    // 0x1af16c: 0x2402010f  addiu       $v0, $zero, 0x10F
    ctx->pc = 0x1af16cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 271));
    // 0x1af170: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF170u;
    {
        const bool branch_taken_0x1af170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF170u;
        // 0x1af174: 0x52300b  movn        $a2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af170) {
            ctx->pc = 0x1AF18Cu;
            goto label_1af18c;
        }
    }
    ctx->pc = 0x1AF178u;
label_1af178:
    // 0x1af178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af17c:
    // 0x1af17c: 0xc06bb88  jal         func_1AEE20
    ctx->pc = 0x1AF17Cu;
    SET_GPR_U32(ctx, 31, 0x1AF184u);
    ctx->pc = 0x1AF180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF17Cu;
    // 0x1af180: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEE20u, 0x1AF17Cu, 0x1AF184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF184u;
label_1af184:
    // 0x1af184: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AF184u;
    {
        const bool branch_taken_0x1af184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF184u;
        // 0x1af188: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af184) {
            ctx->pc = 0x1AF1D0u;
            goto label_1af1d0;
        }
    }
    ctx->pc = 0x1AF18Cu;
label_1af18c:
    // 0x1af18c: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1af18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1af190: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF190u;
    {
        const bool branch_taken_0x1af190 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF190u;
        // 0x1af194: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af190) {
            ctx->pc = 0x1AF1ACu;
            goto label_1af1ac;
        }
    }
    ctx->pc = 0x1AF198u;
    // 0x1af198: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1af198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1af19c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af1a0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af1a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF1A4u;
    {
        const bool branch_taken_0x1af1a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1A4u;
        // 0x1af1a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1a4) {
            ctx->pc = 0x1AF1C0u;
            goto label_1af1c0;
        }
    }
    ctx->pc = 0x1AF1ACu;
label_1af1ac:
    // 0x1af1ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1b0: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AF1B0u;
    SET_GPR_U32(ctx, 31, 0x1AF1B8u);
    ctx->pc = 0x1AF1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1B0u;
    // 0x1af1b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AF1B0u, 0x1AF1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF1B8u;
label_1af1b8:
    // 0x1af1b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF1B8u;
    {
        const bool branch_taken_0x1af1b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1B8u;
        // 0x1af1bc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af1b8) {
            ctx->pc = 0x1AF1D0u;
            goto label_1af1d0;
        }
    }
    ctx->pc = 0x1AF1C0u;
label_1af1c0:
    // 0x1af1c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af1c4: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF1C4u;
    SET_GPR_U32(ctx, 31, 0x1AF1CCu);
    ctx->pc = 0x1AF1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF1C4u;
    // 0x1af1c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF1C4u, 0x1AF1CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF1CCu;
label_1af1cc:
    // 0x1af1cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af1ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af1d0:
    // 0x1af1d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af1d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af1d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af1d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af1d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF1DCu;
        // 0x1af1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF1E4u;
    // 0x1af1e4: 0x0  nop
    ctx->pc = 0x1af1e4u;
    // NOP
    ctx->pc = 0x1af1e8u;
}
