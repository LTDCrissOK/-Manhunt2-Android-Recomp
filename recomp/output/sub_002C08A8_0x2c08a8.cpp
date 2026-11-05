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

// Function: sub_002C08A8
// Address: 0x2c08a8 - 0x2c0960
void sub_002C08A8_0x2c08a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C08A8_0x2c08a8");
#endif

    switch (ctx->pc) {
        case 0x2c08d8u: goto label_2c08d8;
        case 0x2c08e8u: goto label_2c08e8;
        case 0x2c08f8u: goto label_2c08f8;
        case 0x2c0900u: goto label_2c0900;
        case 0x2c0930u: goto label_2c0930;
        default: break;
    }

    ctx->pc = 0x2c08a8u;

    // 0x2c08a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c08a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2c08ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2c08acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c08b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c08b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c08b4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c08b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c08b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c08b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08bc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c08bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08c0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c08c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2c08c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c08c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08c8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c08c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x2c08cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c08ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c08d0: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C08D0u;
    SET_GPR_U32(ctx, 31, 0x2C08D8u);
    ctx->pc = 0x2C08D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08D0u;
    // 0x2c08d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C08D0u, 0x2C08D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08D8u;
label_2c08d8:
    // 0x2c08d8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c08d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c08dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c08e0: 0xc0b002c  jal         func_2C00B0
    ctx->pc = 0x2C08E0u;
    SET_GPR_U32(ctx, 31, 0x2C08E8u);
    ctx->pc = 0x2C08E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08E0u;
    // 0x2c08e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C00B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C00B0u, 0x2C08E0u, 0x2C08E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C08E8u;
label_2c08e8:
    // 0x2c08e8: 0x82020005  lb          $v0, 0x5($s0)
    ctx->pc = 0x2c08e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c08ec: 0x18400014  blez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C08ECu;
    {
        const bool branch_taken_0x2c08ec = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2C08F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C08ECu;
        // 0x2c08f0: 0x3c130057  lui         $s3, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c08ec) {
            ctx->pc = 0x2C0940u;
            goto label_2c0940;
        }
    }
    ctx->pc = 0x2C08F4u;
    // 0x2c08f4: 0x82050004  lb          $a1, 0x4($s0)
    ctx->pc = 0x2c08f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_2c08f8:
    // 0x2c08f8: 0xc0fa356  jal         func_3E8D58
    ctx->pc = 0x2C08F8u;
    SET_GPR_U32(ctx, 31, 0x2C0900u);
    ctx->pc = 0x2C08FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C08F8u;
    // 0x2c08fc: 0x2664500c  addiu       $a0, $s3, 0x500C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E8D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E8D58u, 0x2C08F8u, 0x2C0900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0900u;
label_2c0900:
    // 0x2c0900: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2c0900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c0904: 0x113880  sll         $a3, $s1, 2
    ctx->pc = 0x2c0904u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2c0908: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c0908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c090c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c090cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c0910: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2c0910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2c0914: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2c0914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2c0918: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2c0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2c091c: 0x82060004  lb          $a2, 0x4($s0)
    ctx->pc = 0x2c091cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2c0920: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x2c0920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x2c0924: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2c0924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2c0928: 0xc0b11aa  jal         func_2C46A8
    ctx->pc = 0x2C0928u;
    SET_GPR_U32(ctx, 31, 0x2C0930u);
    ctx->pc = 0x2C092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C0928u;
    // 0x2c092c: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C46A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C46A8u, 0x2C0928u, 0x2C0930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0930u;
label_2c0930:
    // 0x2c0930: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x2c0930u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x2c0934: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x2c0934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2c0938: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x2C0938u;
    {
        const bool branch_taken_0x2c0938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c0938) {
            ctx->pc = 0x2C093Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C0938u;
            // 0x2c093c: 0x82050004  lb          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C08F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c08f8;
        }
    }
    ctx->pc = 0x2C0940u;
label_2c0940:
    // 0x2c0940: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c0940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0944: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c0944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2c0948: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c0948u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c094c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c094cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2c0950: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c0950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c0954: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0954u;
        // 0x2c0958: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C095Cu;
    // 0x2c095c: 0x0  nop
    ctx->pc = 0x2c095cu;
    // NOP
    ctx->pc = 0x2c0960u;
}
