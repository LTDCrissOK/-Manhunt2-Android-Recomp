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

// Function: sub_001AF1E8
// Address: 0x1af1e8 - 0x1af2d0
void sub_001AF1E8_0x1af1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AF1E8_0x1af1e8");
#endif

    switch (ctx->pc) {
        case 0x1af208u: goto label_1af208;
        case 0x1af214u: goto label_1af214;
        case 0x1af224u: goto label_1af224;
        case 0x1af26cu: goto label_1af26c;
        case 0x1af2a0u: goto label_1af2a0;
        case 0x1af2b4u: goto label_1af2b4;
        default: break;
    }

    ctx->pc = 0x1af1e8u;

    // 0x1af1e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1af1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1af1ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1af1ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1af1f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1af1f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af1f4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1af1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1af1f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1af1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1af1fc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1af1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1af200: 0xc06c11c  jal         func_1B0470
    ctx->pc = 0x1AF200u;
    SET_GPR_U32(ctx, 31, 0x1AF208u);
    ctx->pc = 0x1AF204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF200u;
    // 0x1af204: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0470u, 0x1AF200u, 0x1AF208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF208u;
label_1af208:
    // 0x1af208: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x1af208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1af20c: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x1AF20Cu;
    SET_GPR_U32(ctx, 31, 0x1AF214u);
    ctx->pc = 0x1AF210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF20Cu;
    // 0x1af210: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x1AF20Cu, 0x1AF214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF214u;
label_1af214:
    // 0x1af214: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AF214u;
    {
        const bool branch_taken_0x1af214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af214) {
            ctx->pc = 0x1AF218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF214u;
            // 0x1af218: 0x8e03009c  lw          $v1, 0x9C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF234u;
            goto label_1af234;
        }
    }
    ctx->pc = 0x1AF21Cu;
    // 0x1af21c: 0xc097f26  jal         func_25FC98
    ctx->pc = 0x1AF21Cu;
    SET_GPR_U32(ctx, 31, 0x1AF224u);
    ctx->pc = 0x1AF220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF21Cu;
    // 0x1af220: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x1AF21Cu, 0x1AF224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF224u;
label_1af224:
    // 0x1af224: 0x3842006e  xori        $v0, $v0, 0x6E
    ctx->pc = 0x1af224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)110);
    // 0x1af228: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1af228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af22c: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x1af22cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x1af230: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1af230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_1af234:
    // 0x1af234: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1af234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x1af238: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1af238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1af23c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AF23Cu;
    {
        const bool branch_taken_0x1af23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1af23c) {
            ctx->pc = 0x1AF240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AF23Cu;
            // 0x1af240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AF264u;
            goto label_1af264;
        }
    }
    ctx->pc = 0x1AF244u;
    // 0x1af244: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x1af244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1af248: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1af248u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1af24c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF24Cu;
    {
        const bool branch_taken_0x1af24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF24Cu;
        // 0x1af250: 0x24060102  addiu       $a2, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af24c) {
            ctx->pc = 0x1AF260u;
            goto label_1af260;
        }
    }
    ctx->pc = 0x1AF254u;
    // 0x1af254: 0x24020110  addiu       $v0, $zero, 0x110
    ctx->pc = 0x1af254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x1af258: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF258u;
    {
        const bool branch_taken_0x1af258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF258u;
        // 0x1af25c: 0x52300b  movn        $a2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af258) {
            ctx->pc = 0x1AF274u;
            goto label_1af274;
        }
    }
    ctx->pc = 0x1AF260u;
label_1af260:
    // 0x1af260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1af264:
    // 0x1af264: 0xc06bbb6  jal         func_1AEED8
    ctx->pc = 0x1AF264u;
    SET_GPR_U32(ctx, 31, 0x1AF26Cu);
    ctx->pc = 0x1AF268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF264u;
    // 0x1af268: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AEED8u, 0x1AF264u, 0x1AF26Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF26Cu;
label_1af26c:
    // 0x1af26c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1AF26Cu;
    {
        const bool branch_taken_0x1af26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF26Cu;
        // 0x1af270: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af26c) {
            ctx->pc = 0x1AF2B8u;
            goto label_1af2b8;
        }
    }
    ctx->pc = 0x1AF274u;
label_1af274:
    // 0x1af274: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1af274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1af278: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF278u;
    {
        const bool branch_taken_0x1af278 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF278u;
        // 0x1af27c: 0x61880  sll         $v1, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af278) {
            ctx->pc = 0x1AF294u;
            goto label_1af294;
        }
    }
    ctx->pc = 0x1AF280u;
    // 0x1af280: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1af280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1af284: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1af284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1af288: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1af288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1af28c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AF28Cu;
    {
        const bool branch_taken_0x1af28c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AF290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF28Cu;
        // 0x1af290: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af28c) {
            ctx->pc = 0x1AF2A8u;
            goto label_1af2a8;
        }
    }
    ctx->pc = 0x1AF294u;
label_1af294:
    // 0x1af294: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1af294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1af298: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AF298u;
    SET_GPR_U32(ctx, 31, 0x1AF2A0u);
    ctx->pc = 0x1AF29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF298u;
    // 0x1af29c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AF298u, 0x1AF2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2A0u;
label_1af2a0:
    // 0x1af2a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1AF2A0u;
    {
        const bool branch_taken_0x1af2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AF2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2A0u;
        // 0x1af2a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1af2a0) {
            ctx->pc = 0x1AF2B8u;
            goto label_1af2b8;
        }
    }
    ctx->pc = 0x1AF2A8u;
label_1af2a8:
    // 0x1af2a8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1af2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1af2ac: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AF2ACu;
    SET_GPR_U32(ctx, 31, 0x1AF2B4u);
    ctx->pc = 0x1AF2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AF2ACu;
    // 0x1af2b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AF2ACu, 0x1AF2B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AF2B4u;
label_1af2b4:
    // 0x1af2b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1af2b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1af2b8:
    // 0x1af2b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1af2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1af2bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1af2bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1af2c0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1af2c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1af2c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AF2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AF2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AF2C4u;
        // 0x1af2c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AF2C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AF2CCu;
    // 0x1af2cc: 0x0  nop
    ctx->pc = 0x1af2ccu;
    // NOP
    ctx->pc = 0x1af2d0u;
}
