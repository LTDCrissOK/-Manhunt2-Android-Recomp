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

// Function: sub_003AC788
// Address: 0x3ac788 - 0x3ac880
void sub_003AC788_0x3ac788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC788_0x3ac788");
#endif

    switch (ctx->pc) {
        case 0x3ac7c8u: goto label_3ac7c8;
        case 0x3ac808u: goto label_3ac808;
        case 0x3ac83cu: goto label_3ac83c;
        case 0x3ac850u: goto label_3ac850;
        default: break;
    }

    ctx->pc = 0x3ac788u;

    // 0x3ac788: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ac788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3ac78c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ac78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ac790: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ac790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3ac794: 0x245027a8  addiu       $s0, $v0, 0x27A8
    ctx->pc = 0x3ac794u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10152));
    // 0x3ac798: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x3ac798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x3ac79c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ac79cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac7a0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3ac7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3ac7a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3ac7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac7a8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x3ac7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x3ac7ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ac7acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac7b0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3ac7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3ac7b4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x3ac7b4u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x4227A8u));
    // 0x3ac7b8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x3AC7B8u;
    {
        const bool branch_taken_0x3ac7b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7B8u;
        // 0x3ac7bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7b8) {
            ctx->pc = 0x3AC7ECu;
            goto label_3ac7ec;
        }
    }
    ctx->pc = 0x3AC7C0u;
    // 0x3ac7c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ac7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac7c4: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x3ac7c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ac7c8:
    // 0x3ac7c8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3ac7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3ac7cc: 0x24a50014  addiu       $a1, $a1, 0x14
    ctx->pc = 0x3ac7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x3ac7d0: 0x28820020  slti        $v0, $a0, 0x20
    ctx->pc = 0x3ac7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x3ac7d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC7D4u;
    {
        const bool branch_taken_0x3ac7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7D4u;
        // 0x3ac7d8: 0x24630014  addiu       $v1, $v1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7d4) {
            ctx->pc = 0x3AC7ECu;
            goto label_3ac7ec;
        }
    }
    ctx->pc = 0x3AC7DCu;
    // 0x3ac7dc: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3ac7dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3ac7e0: 0x0  nop
    ctx->pc = 0x3ac7e0u;
    // NOP
    // 0x3ac7e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3AC7E4u;
    {
        const bool branch_taken_0x3ac7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7E4u;
        // 0x3ac7e8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7e4) {
            ctx->pc = 0x3AC7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ac7c8;
        }
    }
    ctx->pc = 0x3AC7ECu;
label_3ac7ec:
    // 0x3ac7ec: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x3ac7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3ac7f0: 0x1083001c  beq         $a0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3AC7F0u;
    {
        const bool branch_taken_0x3ac7f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x3AC7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC7F0u;
        // 0x3ac7f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac7f0) {
            ctx->pc = 0x3AC864u;
            goto label_3ac864;
        }
    }
    ctx->pc = 0x3AC7F8u;
    // 0x3ac7f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ac7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac7fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ac7fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac800: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3AC800u;
    SET_GPR_U32(ctx, 31, 0x3AC808u);
    ctx->pc = 0x3AC804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC800u;
    // 0x3ac804: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3AC800u, 0x3AC808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC808u;
label_3ac808:
    // 0x3ac808: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x3ac808u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x3ac80c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x3ac80cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x3ac810: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3ac810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac814: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x3ac814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
    // 0x3ac818: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ac818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac81c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3ac81cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3ac820: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3ac820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac824: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3ac824u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac828: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x3ac828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x3ac82c: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x3ac82cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
    // 0x3ac830: 0xafb10008  sw          $s1, 0x8($sp)
    ctx->pc = 0x3ac830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 17));
    // 0x3ac834: 0xc0e8f8a  jal         func_3A3E28
    ctx->pc = 0x3AC834u;
    SET_GPR_U32(ctx, 31, 0x3AC83Cu);
    ctx->pc = 0x3AC838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC834u;
    // 0x3ac838: 0xafb0000c  sw          $s0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3AC834u, 0x3AC83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC83Cu;
label_3ac83c:
    // 0x3ac83c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3AC83Cu;
    {
        const bool branch_taken_0x3ac83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC83Cu;
        // 0x3ac840: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac83c) {
            ctx->pc = 0x3AC858u;
            goto label_3ac858;
        }
    }
    ctx->pc = 0x3AC844u;
    // 0x3ac844: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ac844u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3ac848: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3AC848u;
    SET_GPR_U32(ctx, 31, 0x3AC850u);
    ctx->pc = 0x3AC84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC848u;
    // 0x3ac84c: 0x2484f2e0  addiu       $a0, $a0, -0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3AC848u, 0x3AC850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC850u;
label_3ac850:
    // 0x3ac850: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3AC850u;
    {
        const bool branch_taken_0x3ac850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC850u;
        // 0x3ac854: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac850) {
            ctx->pc = 0x3AC864u;
            goto label_3ac864;
        }
    }
    ctx->pc = 0x3AC858u;
label_3ac858:
    // 0x3ac858: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ac858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ac85c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3ac85cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ac860: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x3ac860u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_3ac864:
    // 0x3ac864: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ac864u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ac868: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x3ac868u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3ac86c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3ac86cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ac870: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x3ac870u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3ac874: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3ac874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ac878: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC878u;
        // 0x3ac87c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC880u;
}
