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

// Function: sub_002D7278
// Address: 0x2d7278 - 0x2d7350
void sub_002D7278_0x2d7278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7278_0x2d7278");
#endif

    switch (ctx->pc) {
        case 0x2d72a4u: goto label_2d72a4;
        case 0x2d72c0u: goto label_2d72c0;
        case 0x2d72d4u: goto label_2d72d4;
        case 0x2d72f8u: goto label_2d72f8;
        default: break;
    }

    ctx->pc = 0x2d7278u;

    // 0x2d7278: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d7278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d727c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d727cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7280: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7284: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7288: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d7288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d728c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d728cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7290: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d7294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d7294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d7298: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d7298u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d729c: 0xc0b5c8c  jal         func_2D7230
    ctx->pc = 0x2D729Cu;
    SET_GPR_U32(ctx, 31, 0x2D72A4u);
    ctx->pc = 0x2D72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D729Cu;
    // 0x2d72a0: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7230u, 0x2D729Cu, 0x2D72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72A4u;
label_2d72a4:
    // 0x2d72a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d72a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72a8: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2D72A8u;
    {
        const bool branch_taken_0x2d72a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d72a8) {
            ctx->pc = 0x2D72ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D72A8u;
            // 0x2d72ac: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D72DCu;
            goto label_2d72dc;
        }
    }
    ctx->pc = 0x2D72B0u;
    // 0x2d72b0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2d72b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2d72b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2d72b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2d72b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2D72B8u;
    {
        const bool branch_taken_0x2d72b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72B8u;
        // 0x2d72bc: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72b8) {
            ctx->pc = 0x2D7318u;
            goto label_2d7318;
        }
    }
    ctx->pc = 0x2D72C0u;
label_2d72c0:
    // 0x2d72c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2d72c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d72c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72c8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2d72c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72cc: 0xc0b5c68  jal         func_2D71A0
    ctx->pc = 0x2D72CCu;
    SET_GPR_U32(ctx, 31, 0x2D72D4u);
    ctx->pc = 0x2D72D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D72CCu;
    // 0x2d72d0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D71A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D71A0u, 0x2D72CCu, 0x2D72D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D72D4u;
label_2d72d4:
    // 0x2d72d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2D72D4u;
    {
        const bool branch_taken_0x2d72d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D72D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72D4u;
        // 0x2d72d8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72d4) {
            ctx->pc = 0x2D731Cu;
            goto label_2d731c;
        }
    }
    ctx->pc = 0x2D72DCu;
label_2d72dc:
    // 0x2d72dc: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x2D72DCu;
    {
        const bool branch_taken_0x2d72dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2D72E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72DCu;
        // 0x2d72e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72dc) {
            ctx->pc = 0x2D7314u;
            goto label_2d7314;
        }
    }
    ctx->pc = 0x2D72E4u;
    // 0x2d72e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d72e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2d72e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2d72e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d72ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d72f0: 0x24440014  addiu       $a0, $v0, 0x14
    ctx->pc = 0x2d72f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2d72f4: 0x0  nop
    ctx->pc = 0x2d72f4u;
    // NOP
label_2d72f8:
    // 0x2d72f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2d72f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2d72fc: 0x1040fff0  beqz        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2D72FCu;
    {
        const bool branch_taken_0x2d72fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D72FCu;
        // 0x2d7300: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d72fc) {
            ctx->pc = 0x2D72C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d72c0;
        }
    }
    ctx->pc = 0x2D7304u;
    // 0x2d7304: 0x2484001c  addiu       $a0, $a0, 0x1C
    ctx->pc = 0x2d7304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
    // 0x2d7308: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x2d7308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2d730c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2D730Cu;
    {
        const bool branch_taken_0x2d730c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D730Cu;
        // 0x2d7310: 0x2463001c  addiu       $v1, $v1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d730c) {
            ctx->pc = 0x2D72F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d72f8;
        }
    }
    ctx->pc = 0x2D7314u;
label_2d7314:
    // 0x2d7314: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d7314u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d7318:
    // 0x2d7318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d731c:
    // 0x2d731c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d731cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7320: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7320u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7324: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d7324u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d7328: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d7328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d732c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D732Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D732Cu;
        // 0x2d7330: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D732Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7334u;
    // 0x2d7334: 0x0  nop
    ctx->pc = 0x2d7334u;
    // NOP
    // 0x2d7338: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d7338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d733c: 0x0  nop
    ctx->pc = 0x2d733cu;
    // NOP
    // 0x2d7340: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d7340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d7344: 0x0  nop
    ctx->pc = 0x2d7344u;
    // NOP
    // 0x2d7348: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d7348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d734c: 0x0  nop
    ctx->pc = 0x2d734cu;
    // NOP
    ctx->pc = 0x2d7350u;
}
