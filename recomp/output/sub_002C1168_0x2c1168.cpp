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

// Function: sub_002C1168
// Address: 0x2c1168 - 0x2c1220
void sub_002C1168_0x2c1168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C1168_0x2c1168");
#endif

    switch (ctx->pc) {
        case 0x2c1198u: goto label_2c1198;
        case 0x2c11a8u: goto label_2c11a8;
        case 0x2c11b8u: goto label_2c11b8;
        case 0x2c11c0u: goto label_2c11c0;
        case 0x2c11f0u: goto label_2c11f0;
        default: break;
    }

    ctx->pc = 0x2c1168u;

    // 0x2c1168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c1168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c116c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c116cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c1170: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c1170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c1174: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c1174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c1178: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c1178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c117c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c117cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1180: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c1180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c1184: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c1184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c1188: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c1188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c118c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c118cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c1190: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C1190u;
    SET_GPR_U32(ctx, 31, 0x2C1198u);
    ctx->pc = 0x2C1194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C1190u;
    // 0x2c1194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C1190u, 0x2C1198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C1198u;
label_2c1198:
    // 0x2c1198: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c1198u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c119c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c119cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11a0: 0xc0b002c  jal         func_2C00B0
    ctx->pc = 0x2C11A0u;
    SET_GPR_U32(ctx, 31, 0x2C11A8u);
    ctx->pc = 0x2C11A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C11A0u;
    // 0x2c11a4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C00B0u, 0x2C11A0u, 0x2C11A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11A8u;
label_2c11a8:
    // 0x2c11a8: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x2c11a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c11ac: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C11ACu;
    {
        const bool branch_taken_0x2c11ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C11B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C11ACu;
        // 0x2c11b0: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c11ac) {
            ctx->pc = 0x2C1200u;
            goto label_2c1200;
        }
    }
    ctx->pc = 0x2C11B4u;
    // 0x2c11b4: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x2c11b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2c11b8:
    // 0x2c11b8: 0xc0fa3ee  jal         func_3E8FB8
    ctx->pc = 0x2C11B8u;
    SET_GPR_U32(ctx, 31, 0x2C11C0u);
    ctx->pc = 0x2C11BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C11B8u;
    // 0x2c11bc: 0x26645058  addiu       $a0, $s3, 0x5058 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8FB8u, 0x2C11B8u, 0x2C11C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11C0u;
label_2c11c0:
    // 0x2c11c0: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c11c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c11c4: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2c11c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c11c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c11c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c11cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c11ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c11d0: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2c11d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2c11d4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c11d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c11d8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c11d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c11dc: 0x82060004  lb          $a2, 0x4($s0)
    ctx->pc = 0x2c11dcu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c11e0: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c11e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c11e4: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2c11e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c11e8: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C11E8u;
    SET_GPR_U32(ctx, 31, 0x2C11F0u);
    ctx->pc = 0x2C11ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C11E8u;
    // 0x2c11ec: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C11E8u, 0x2C11F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C11F0u;
label_2c11f0:
    // 0x2c11f0: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x2c11f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c11f4: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2c11f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c11f8: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C11F8u;
    {
        const bool branch_taken_0x2c11f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c11f8) {
            ctx->pc = 0x2C11FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C11F8u;
            // 0x2c11fc: 0x82050004  lb          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C11B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c11b8;
        }
    }
    ctx->pc = 0x2C1200u;
label_2c1200:
    // 0x2c1200: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c1200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c1204: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c1204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c1208: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c1208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c120c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c120cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c1210: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c1210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c1214: 0x3e00008  jr          $ra
    ctx->pc = 0x2C1214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C1218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C1214u;
        // 0x2c1218: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C1214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C121Cu;
    // 0x2c121c: 0x0  nop
    ctx->pc = 0x2c121cu;
    // NOP
    ctx->pc = 0x2c1220u;
}
