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

// Function: sub_001760C8
// Address: 0x1760c8 - 0x1761fc
void sub_001760C8_0x1760c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001760C8_0x1760c8");
#endif

    switch (ctx->pc) {
        case 0x1760ecu: goto label_1760ec;
        case 0x17611cu: goto label_17611c;
        case 0x17612cu: goto label_17612c;
        case 0x17613cu: goto label_17613c;
        case 0x17614cu: goto label_17614c;
        case 0x17615cu: goto label_17615c;
        case 0x17616cu: goto label_17616c;
        case 0x17617cu: goto label_17617c;
        case 0x17618cu: goto label_17618c;
        case 0x17619cu: goto label_17619c;
        case 0x1761acu: goto label_1761ac;
        case 0x1761bcu: goto label_1761bc;
        case 0x1761ccu: goto label_1761cc;
        case 0x1761dcu: goto label_1761dc;
        case 0x1761ecu: goto label_1761ec;
        default: break;
    }

    ctx->pc = 0x1760c8u;

    // 0x1760c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1760c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1760cc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1760ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1760d0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1760d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1760d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1760d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760d8: 0x8e0200b4  lw          $v0, 0xB4($s0)
    ctx->pc = 0x1760d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 180)));
    // 0x1760dc: 0x54400048  bnel        $v0, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x1760DCu;
    {
        const bool branch_taken_0x1760dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1760dc) {
            ctx->pc = 0x1760E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1760DCu;
            // 0x1760e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x1760E4u;
    // 0x1760e4: 0xc05a602  jal         func_169808
    ctx->pc = 0x1760E4u;
    SET_GPR_U32(ctx, 31, 0x1760ECu);
    ctx->pc = 0x1760E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760E4u;
    // 0x1760e8: 0x8e04005c  lw          $a0, 0x5C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169808u, 0x1760E4u, 0x1760ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760ECu;
label_1760ec:
    // 0x1760ec: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1760ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1760f0: 0x2c620010  sltiu       $v0, $v1, 0x10
    ctx->pc = 0x1760f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1760f4: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x1760F4u;
    {
        const bool branch_taken_0x1760f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1760F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1760F4u;
        // 0x1760f8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1760f4) {
            ctx->pc = 0x1761FCu;
            return;
        }
    }
    ctx->pc = 0x1760FCu;
    // 0x1760fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1760fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176100: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x176100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x176104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x176104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x176108: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17610c: 0x800008  jr          $a0
    ctx->pc = 0x17610Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x176114u: goto label_176114;
            case 0x176124u: goto label_176124;
            case 0x176134u: goto label_176134;
            case 0x176144u: goto label_176144;
            case 0x176154u: goto label_176154;
            case 0x176164u: goto label_176164;
            case 0x176174u: goto label_176174;
            case 0x176184u: goto label_176184;
            case 0x176194u: goto label_176194;
            case 0x1761A4u: goto label_1761a4;
            case 0x1761B4u: goto label_1761b4;
            case 0x1761C4u: goto label_1761c4;
            case 0x1761D4u: goto label_1761d4;
            case 0x1761E4u: goto label_1761e4;
            case 0x1761F4u: goto label_1761f4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17610Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x176114u;
label_176114:
    // 0x176114: 0xc05d9e2  jal         func_176788
    ctx->pc = 0x176114u;
    SET_GPR_U32(ctx, 31, 0x17611Cu);
    ctx->pc = 0x176118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176114u;
    // 0x176118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176788u, 0x176114u, 0x17611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17611Cu;
label_17611c:
    // 0x17611c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x17611Cu;
    {
        const bool branch_taken_0x17611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17611Cu;
        // 0x176120: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17611c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176124u;
label_176124:
    // 0x176124: 0xc05da16  jal         func_176858
    ctx->pc = 0x176124u;
    SET_GPR_U32(ctx, 31, 0x17612Cu);
    ctx->pc = 0x176128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176124u;
    // 0x176128: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176858u, 0x176124u, 0x17612Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17612Cu;
label_17612c:
    // 0x17612c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x17612Cu;
    {
        const bool branch_taken_0x17612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17612Cu;
        // 0x176130: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17612c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176134u;
label_176134:
    // 0x176134: 0xc05da32  jal         func_1768C8
    ctx->pc = 0x176134u;
    SET_GPR_U32(ctx, 31, 0x17613Cu);
    ctx->pc = 0x176138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176134u;
    // 0x176138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1768C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C8u, 0x176134u, 0x17613Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17613Cu;
label_17613c:
    // 0x17613c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x17613Cu;
    {
        const bool branch_taken_0x17613c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17613Cu;
        // 0x176140: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17613c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176144u;
label_176144:
    // 0x176144: 0xc05da52  jal         func_176948
    ctx->pc = 0x176144u;
    SET_GPR_U32(ctx, 31, 0x17614Cu);
    ctx->pc = 0x176148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176144u;
    // 0x176148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176948u, 0x176144u, 0x17614Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17614Cu;
label_17614c:
    // 0x17614c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x17614Cu;
    {
        const bool branch_taken_0x17614c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17614Cu;
        // 0x176150: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17614c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176154u;
label_176154:
    // 0x176154: 0xc05da88  jal         func_176A20
    ctx->pc = 0x176154u;
    SET_GPR_U32(ctx, 31, 0x17615Cu);
    ctx->pc = 0x176158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176154u;
    // 0x176158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A20u, 0x176154u, 0x17615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17615Cu;
label_17615c:
    // 0x17615c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x17615Cu;
    {
        const bool branch_taken_0x17615c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17615Cu;
        // 0x176160: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17615c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176164u;
label_176164:
    // 0x176164: 0xc05daa6  jal         func_176A98
    ctx->pc = 0x176164u;
    SET_GPR_U32(ctx, 31, 0x17616Cu);
    ctx->pc = 0x176168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176164u;
    // 0x176168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A98u, 0x176164u, 0x17616Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17616Cu;
label_17616c:
    // 0x17616c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x17616Cu;
    {
        const bool branch_taken_0x17616c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17616Cu;
        // 0x176170: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17616c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176174u;
label_176174:
    // 0x176174: 0xc05daca  jal         func_176B28
    ctx->pc = 0x176174u;
    SET_GPR_U32(ctx, 31, 0x17617Cu);
    ctx->pc = 0x176178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176174u;
    // 0x176178: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176B28u, 0x176174u, 0x17617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17617Cu;
label_17617c:
    // 0x17617c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x17617Cu;
    {
        const bool branch_taken_0x17617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17617Cu;
        // 0x176180: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17617c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176184u;
label_176184:
    // 0x176184: 0xc05daf2  jal         func_176BC8
    ctx->pc = 0x176184u;
    SET_GPR_U32(ctx, 31, 0x17618Cu);
    ctx->pc = 0x176188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176184u;
    // 0x176188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BC8u, 0x176184u, 0x17618Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17618Cu;
label_17618c:
    // 0x17618c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x17618Cu;
    {
        const bool branch_taken_0x17618c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17618Cu;
        // 0x176190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17618c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x176194u;
label_176194:
    // 0x176194: 0xc05db1e  jal         func_176C78
    ctx->pc = 0x176194u;
    SET_GPR_U32(ctx, 31, 0x17619Cu);
    ctx->pc = 0x176198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176194u;
    // 0x176198: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C78u, 0x176194u, 0x17619Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17619Cu;
label_17619c:
    // 0x17619c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17619Cu;
    {
        const bool branch_taken_0x17619c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17619Cu;
        // 0x1761a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17619c) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x1761A4u;
label_1761a4:
    // 0x1761a4: 0xc05db4e  jal         func_176D38
    ctx->pc = 0x1761A4u;
    SET_GPR_U32(ctx, 31, 0x1761ACu);
    ctx->pc = 0x1761A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761A4u;
    // 0x1761a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D38u, 0x1761A4u, 0x1761ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761ACu;
label_1761ac:
    // 0x1761ac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1761ACu;
    {
        const bool branch_taken_0x1761ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761ACu;
        // 0x1761b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761ac) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x1761B4u;
label_1761b4:
    // 0x1761b4: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x1761B4u;
    SET_GPR_U32(ctx, 31, 0x1761BCu);
    ctx->pc = 0x1761B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761B4u;
    // 0x1761b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x1761B4u, 0x1761BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761BCu;
label_1761bc:
    // 0x1761bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1761BCu;
    {
        const bool branch_taken_0x1761bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761BCu;
        // 0x1761c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761bc) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x1761C4u;
label_1761c4:
    // 0x1761c4: 0xc05db9a  jal         func_176E68
    ctx->pc = 0x1761C4u;
    SET_GPR_U32(ctx, 31, 0x1761CCu);
    ctx->pc = 0x1761C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761C4u;
    // 0x1761c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176E68u, 0x1761C4u, 0x1761CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761CCu;
label_1761cc:
    // 0x1761cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1761CCu;
    {
        const bool branch_taken_0x1761cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761CCu;
        // 0x1761d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761cc) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x1761D4u;
label_1761d4:
    // 0x1761d4: 0xc05dbd0  jal         func_176F40
    ctx->pc = 0x1761D4u;
    SET_GPR_U32(ctx, 31, 0x1761DCu);
    ctx->pc = 0x1761D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761D4u;
    // 0x1761d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176F40u, 0x1761D4u, 0x1761DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761DCu;
label_1761dc:
    // 0x1761dc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1761DCu;
    {
        const bool branch_taken_0x1761dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761DCu;
        // 0x1761e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761dc) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x1761E4u;
label_1761e4:
    // 0x1761e4: 0xc05dbfa  jal         func_176FE8
    ctx->pc = 0x1761E4u;
    SET_GPR_U32(ctx, 31, 0x1761ECu);
    ctx->pc = 0x1761E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761E4u;
    // 0x1761e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176FE8u, 0x1761E4u, 0x1761ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761ECu;
label_1761ec:
    // 0x1761ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1761ECu;
    {
        const bool branch_taken_0x1761ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761ECu;
        // 0x1761f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761ec) {
            ctx->pc = 0x176200u;
            return;
        }
    }
    ctx->pc = 0x1761F4u;
label_1761f4:
    // 0x1761f4: 0xc05dbba  jal         func_176EE8
    ctx->pc = 0x1761F4u;
    SET_GPR_U32(ctx, 31, 0x1761FCu);
    ctx->pc = 0x1761F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1761F4u;
    // 0x1761f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176EE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176EE8u, 0x1761F4u, 0x1761FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1761FCu;
}
