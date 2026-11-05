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

// Function: sub_002778E8
// Address: 0x2778e8 - 0x2779a0
void sub_002778E8_0x2778e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002778E8_0x2778e8");
#endif

    switch (ctx->pc) {
        case 0x277918u: goto label_277918;
        case 0x277920u: goto label_277920;
        case 0x27794cu: goto label_27794c;
        case 0x277954u: goto label_277954;
        case 0x277984u: goto label_277984;
        default: break;
    }

    ctx->pc = 0x2778e8u;

    // 0x2778e8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2778e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2778ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2778ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2778f0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2778f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2778f4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2778f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2778f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2778f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2778fc: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2778fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x277900: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x277900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x277904: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x277904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x277908: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x277908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x27790c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x27790Cu;
    {
        const bool branch_taken_0x27790c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27790Cu;
        // 0x277910: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27790c) {
            ctx->pc = 0x277928u;
            goto label_277928;
        }
    }
    ctx->pc = 0x277914u;
    // 0x277914: 0x0  nop
    ctx->pc = 0x277914u;
    // NOP
label_277918:
    // 0x277918: 0xc09ddfc  jal         func_2777F0
    ctx->pc = 0x277918u;
    SET_GPR_U32(ctx, 31, 0x277920u);
    ctx->pc = 0x27791Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277918u;
    // 0x27791c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777F0u, 0x277918u, 0x277920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277920u;
label_277920:
    // 0x277920: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x277920u;
    {
        const bool branch_taken_0x277920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277920) {
            ctx->pc = 0x277924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277920u;
            // 0x277924: 0xae200114  sw          $zero, 0x114($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 276), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277930u;
            goto label_277930;
        }
    }
    ctx->pc = 0x277928u;
label_277928:
    // 0x277928: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x277928u;
    {
        const bool branch_taken_0x277928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27792Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277928u;
        // 0x27792c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277928) {
            ctx->pc = 0x27798Cu;
            goto label_27798c;
        }
    }
    ctx->pc = 0x277930u;
label_277930:
    // 0x277930: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277934: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x277934u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x277938: 0x24a582a8  addiu       $a1, $a1, -0x7D58
    ctx->pc = 0x277938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935208));
    // 0x27793c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x27793cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x277940: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x277940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277944: 0xc0eff1c  jal         func_3BFC70
    ctx->pc = 0x277944u;
    SET_GPR_U32(ctx, 31, 0x27794Cu);
    ctx->pc = 0x277948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277944u;
    // 0x277948: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFC70u, 0x277944u, 0x27794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27794Cu;
label_27794c:
    // 0x27794c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x27794Cu;
    SET_GPR_U32(ctx, 31, 0x277954u);
    ctx->pc = 0x277950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27794Cu;
    // 0x277950: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x27794Cu, 0x277954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277954u;
label_277954:
    // 0x277954: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x277954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x277958: 0x86040006  lh          $a0, 0x6($s0)
    ctx->pc = 0x277958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x27795c: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x27795cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x277960: 0x96050006  lhu         $a1, 0x6($s0)
    ctx->pc = 0x277960u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x277964: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x277964u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x277968: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x277968u;
    {
        const bool branch_taken_0x277968 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277968u;
        // 0x27796c: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277968) {
            ctx->pc = 0x277974u;
            goto label_277974;
        }
    }
    ctx->pc = 0x277970u;
    // 0x277970: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x277970u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
label_277974:
    // 0x277974: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x277974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x277978: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x277978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27797c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x27797Cu;
    SET_GPR_U32(ctx, 31, 0x277984u);
    ctx->pc = 0x277980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27797Cu;
    // 0x277980: 0x24a582b0  addiu       $a1, $a1, -0x7D50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x27797Cu, 0x277984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277984u;
label_277984:
    // 0x277984: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x277984u;
    {
        const bool branch_taken_0x277984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277984u;
        // 0x277988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277984) {
            ctx->pc = 0x277918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277918;
        }
    }
    ctx->pc = 0x27798Cu;
label_27798c:
    // 0x27798c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27798cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x277990: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x277990u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x277994: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x277994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x277998: 0x3e00008  jr          $ra
    ctx->pc = 0x277998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27799Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277998u;
        // 0x27799c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2779A0u;
}
