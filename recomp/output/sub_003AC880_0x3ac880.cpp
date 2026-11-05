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

// Function: sub_003AC880
// Address: 0x3ac880 - 0x3ac9b8
void sub_003AC880_0x3ac880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC880_0x3ac880");
#endif

    switch (ctx->pc) {
        case 0x3ac880u: goto label_3ac880;
        case 0x3ac884u: goto label_3ac884;
        case 0x3ac888u: goto label_3ac888;
        case 0x3ac88cu: goto label_3ac88c;
        case 0x3ac890u: goto label_3ac890;
        case 0x3ac894u: goto label_3ac894;
        case 0x3ac898u: goto label_3ac898;
        case 0x3ac89cu: goto label_3ac89c;
        case 0x3ac8a0u: goto label_3ac8a0;
        case 0x3ac8a4u: goto label_3ac8a4;
        case 0x3ac8a8u: goto label_3ac8a8;
        case 0x3ac8acu: goto label_3ac8ac;
        case 0x3ac8b0u: goto label_3ac8b0;
        case 0x3ac8b4u: goto label_3ac8b4;
        case 0x3ac8b8u: goto label_3ac8b8;
        case 0x3ac8bcu: goto label_3ac8bc;
        case 0x3ac8c0u: goto label_3ac8c0;
        case 0x3ac8c4u: goto label_3ac8c4;
        case 0x3ac8c8u: goto label_3ac8c8;
        case 0x3ac8ccu: goto label_3ac8cc;
        case 0x3ac8d0u: goto label_3ac8d0;
        case 0x3ac8d4u: goto label_3ac8d4;
        case 0x3ac8d8u: goto label_3ac8d8;
        case 0x3ac8dcu: goto label_3ac8dc;
        case 0x3ac8e0u: goto label_3ac8e0;
        case 0x3ac8e4u: goto label_3ac8e4;
        case 0x3ac8e8u: goto label_3ac8e8;
        case 0x3ac8ecu: goto label_3ac8ec;
        case 0x3ac8f0u: goto label_3ac8f0;
        case 0x3ac8f4u: goto label_3ac8f4;
        case 0x3ac8f8u: goto label_3ac8f8;
        case 0x3ac8fcu: goto label_3ac8fc;
        case 0x3ac900u: goto label_3ac900;
        case 0x3ac904u: goto label_3ac904;
        case 0x3ac908u: goto label_3ac908;
        case 0x3ac90cu: goto label_3ac90c;
        case 0x3ac910u: goto label_3ac910;
        case 0x3ac914u: goto label_3ac914;
        case 0x3ac918u: goto label_3ac918;
        case 0x3ac91cu: goto label_3ac91c;
        case 0x3ac920u: goto label_3ac920;
        case 0x3ac924u: goto label_3ac924;
        case 0x3ac928u: goto label_3ac928;
        case 0x3ac92cu: goto label_3ac92c;
        case 0x3ac930u: goto label_3ac930;
        case 0x3ac934u: goto label_3ac934;
        case 0x3ac938u: goto label_3ac938;
        case 0x3ac93cu: goto label_3ac93c;
        case 0x3ac940u: goto label_3ac940;
        case 0x3ac944u: goto label_3ac944;
        case 0x3ac948u: goto label_3ac948;
        case 0x3ac94cu: goto label_3ac94c;
        case 0x3ac950u: goto label_3ac950;
        case 0x3ac954u: goto label_3ac954;
        case 0x3ac958u: goto label_3ac958;
        case 0x3ac95cu: goto label_3ac95c;
        case 0x3ac960u: goto label_3ac960;
        case 0x3ac964u: goto label_3ac964;
        case 0x3ac968u: goto label_3ac968;
        case 0x3ac96cu: goto label_3ac96c;
        case 0x3ac970u: goto label_3ac970;
        case 0x3ac974u: goto label_3ac974;
        case 0x3ac978u: goto label_3ac978;
        case 0x3ac97cu: goto label_3ac97c;
        case 0x3ac980u: goto label_3ac980;
        case 0x3ac984u: goto label_3ac984;
        case 0x3ac988u: goto label_3ac988;
        case 0x3ac98cu: goto label_3ac98c;
        case 0x3ac990u: goto label_3ac990;
        case 0x3ac994u: goto label_3ac994;
        case 0x3ac998u: goto label_3ac998;
        case 0x3ac99cu: goto label_3ac99c;
        case 0x3ac9a0u: goto label_3ac9a0;
        case 0x3ac9a4u: goto label_3ac9a4;
        case 0x3ac9a8u: goto label_3ac9a8;
        case 0x3ac9acu: goto label_3ac9ac;
        case 0x3ac9b0u: goto label_3ac9b0;
        case 0x3ac9b4u: goto label_3ac9b4;
        default: break;
    }

    ctx->pc = 0x3ac880u;

label_3ac880:
    // 0x3ac880: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ac880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ac884:
    // 0x3ac884: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3ac884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac888:
    // 0x3ac888: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3ac888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3ac88c:
    // 0x3ac88c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ac88cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac890:
    // 0x3ac890: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ac890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ac894:
    // 0x3ac894: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3ac894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3ac898:
    // 0x3ac898: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3ac898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ac89c:
    // 0x3ac89c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3ac89cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8a0:
    // 0x3ac8a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x3ac8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3ac8a4:
    // 0x3ac8a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3ac8a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ac8a8:
    // 0x3ac8a8: 0xc0e8f8a  jal         func_3A3E28
label_3ac8ac:
    if (ctx->pc == 0x3AC8ACu) {
        ctx->pc = 0x3AC8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8A8u;
        // 0x3ac8ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8B0u;
        goto label_3ac8b0;
    }
    ctx->pc = 0x3AC8A8u;
    SET_GPR_U32(ctx, 31, 0x3AC8B0u);
    ctx->pc = 0x3AC8ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC8A8u;
    // 0x3ac8ac: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3E28u, 0x3AC8A8u, 0x3AC8B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC8B0u;
label_3ac8b0:
    // 0x3ac8b0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ac8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ac8b4:
    // 0x3ac8b4: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3ac8b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_3ac8b8:
    // 0x3ac8b8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3ac8b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac8bc:
    // 0x3ac8bc: 0x3e00008  jr          $ra
label_3ac8c0:
    if (ctx->pc == 0x3AC8C0u) {
        ctx->pc = 0x3AC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8BCu;
        // 0x3ac8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8C4u;
        goto label_3ac8c4;
    }
    ctx->pc = 0x3AC8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8BCu;
        // 0x3ac8c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC8BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC8C4u;
label_3ac8c4:
    // 0x3ac8c4: 0x0  nop
    ctx->pc = 0x3ac8c4u;
    // NOP
label_3ac8c8:
    // 0x3ac8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3ac8cc:
    // 0x3ac8cc: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x3ac8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_3ac8d0:
    // 0x3ac8d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac8d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ac8d4:
    // 0x3ac8d4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ac8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_3ac8d8:
    // 0x3ac8d8: 0x244291a0  addiu       $v0, $v0, -0x6E60
    ctx->pc = 0x3ac8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939040));
label_3ac8dc:
    // 0x3ac8dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ac8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac8e0:
    // 0x3ac8e0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_3ac8e4:
    if (ctx->pc == 0x3AC8E4u) {
        ctx->pc = 0x3AC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8E0u;
        // 0x3ac8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8E8u;
        goto label_3ac8e8;
    }
    ctx->pc = 0x3AC8E0u;
    {
        const bool branch_taken_0x3ac8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8E0u;
        // 0x3ac8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac8e0) {
            ctx->pc = 0x3AC918u;
            goto label_3ac918;
        }
    }
    ctx->pc = 0x3AC8E8u;
label_3ac8e8:
    // 0x3ac8e8: 0x60f809  jalr        $v1
label_3ac8ec:
    if (ctx->pc == 0x3AC8ECu) {
        ctx->pc = 0x3AC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8E8u;
        // 0x3ac8ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC8F0u;
        goto label_3ac8f0;
    }
    ctx->pc = 0x3AC8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AC8F0u);
        ctx->pc = 0x3AC8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC8E8u;
        // 0x3ac8ec: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC8E8u, 0x3AC8F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC8F0u;
label_3ac8f0:
    // 0x3ac8f0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ac8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ac8f4:
    // 0x3ac8f4: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3ac8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_3ac8f8:
    // 0x3ac8f8: 0x2444330c  addiu       $a0, $v0, 0x330C
    ctx->pc = 0x3ac8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13068));
label_3ac8fc:
    // 0x3ac8fc: 0x24633308  addiu       $v1, $v1, 0x3308
    ctx->pc = 0x3ac8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13064));
label_3ac900:
    // 0x3ac900: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ac904:
    // 0x3ac904: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_3ac908:
    if (ctx->pc == 0x3AC908u) {
        ctx->pc = 0x3AC908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC904u;
        // 0x3ac908: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC90Cu;
        goto label_3ac90c;
    }
    ctx->pc = 0x3AC904u;
    {
        const bool branch_taken_0x3ac904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ac904) {
            ctx->pc = 0x3AC908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3AC904u;
            // 0x3ac908: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3AC90Cu;
            goto label_3ac90c;
        }
    }
    ctx->pc = 0x3AC90Cu;
label_3ac90c:
    // 0x3ac90c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ac910:
    // 0x3ac910: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3ac910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3ac914:
    // 0x3ac914: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3ac914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3ac918:
    // 0x3ac918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac91c:
    // 0x3ac91c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ac91cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ac920:
    // 0x3ac920: 0x3e00008  jr          $ra
label_3ac924:
    if (ctx->pc == 0x3AC924u) {
        ctx->pc = 0x3AC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC920u;
        // 0x3ac924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC928u;
        goto label_3ac928;
    }
    ctx->pc = 0x3AC920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC920u;
        // 0x3ac924: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC928u;
label_3ac928:
    // 0x3ac928: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ac928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ac92c:
    // 0x3ac92c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3ac92cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ac930:
    // 0x3ac930: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ac930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ac934:
    // 0x3ac934: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x3ac934u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_3ac938:
    // 0x3ac938: 0x8e2291a8  lw          $v0, -0x6E58($s1)
    ctx->pc = 0x3ac938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939048)));
label_3ac93c:
    // 0x3ac93c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ac940:
    // 0x3ac940: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3ac944:
    if (ctx->pc == 0x3AC944u) {
        ctx->pc = 0x3AC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC940u;
        // 0x3ac944: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC948u;
        goto label_3ac948;
    }
    ctx->pc = 0x3AC940u;
    {
        const bool branch_taken_0x3ac940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AC944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC940u;
        // 0x3ac944: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac940) {
            ctx->pc = 0x3AC9A0u;
            goto label_3ac9a0;
        }
    }
    ctx->pc = 0x3AC948u;
label_3ac948:
    // 0x3ac948: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ac948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ac94c:
    // 0x3ac94c: 0x24423308  addiu       $v0, $v0, 0x3308
    ctx->pc = 0x3ac94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13064));
label_3ac950:
    // 0x3ac950: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ac950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac954:
    // 0x3ac954: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3ac954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3ac958:
    // 0x3ac958: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3ac958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3ac95c:
    // 0x3ac95c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ac95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ac960:
    // 0x3ac960: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_3ac964:
    if (ctx->pc == 0x3AC964u) {
        ctx->pc = 0x3AC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC960u;
        // 0x3ac964: 0x262391a8  addiu       $v1, $s1, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC968u;
        goto label_3ac968;
    }
    ctx->pc = 0x3AC960u;
    {
        const bool branch_taken_0x3ac960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC960u;
        // 0x3ac964: 0x262391a8  addiu       $v1, $s1, -0x6E58 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac960) {
            ctx->pc = 0x3AC994u;
            goto label_3ac994;
        }
    }
    ctx->pc = 0x3AC968u;
label_3ac968:
    // 0x3ac968: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ac968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3ac96c:
    // 0x3ac96c: 0x2450330c  addiu       $s0, $v0, 0x330C
    ctx->pc = 0x3ac96cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 13068));
label_3ac970:
    // 0x3ac970: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ac970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac974:
    // 0x3ac974: 0x10660005  beq         $v1, $a2, . + 4 + (0x5 << 2)
label_3ac978:
    if (ctx->pc == 0x3AC978u) {
        ctx->pc = 0x3AC97Cu;
        goto label_3ac97c;
    }
    ctx->pc = 0x3AC974u;
    {
        const bool branch_taken_0x3ac974 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x3ac974) {
            ctx->pc = 0x3AC98Cu;
            goto label_3ac98c;
        }
    }
    ctx->pc = 0x3AC97Cu;
label_3ac97c:
    // 0x3ac97c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3ac97cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3ac980:
    // 0x3ac980: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3ac980u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ac984:
    // 0x3ac984: 0xc0eb292  jal         func_3ACA48
label_3ac988:
    if (ctx->pc == 0x3AC988u) {
        ctx->pc = 0x3AC988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC984u;
        // 0x3ac988: 0x2484f338  addiu       $a0, $a0, -0xCC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC98Cu;
        goto label_3ac98c;
    }
    ctx->pc = 0x3AC984u;
    SET_GPR_U32(ctx, 31, 0x3AC98Cu);
    ctx->pc = 0x3AC988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AC984u;
    // 0x3ac988: 0x2484f338  addiu       $a0, $a0, -0xCC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3ACA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3ACA48u, 0x3AC984u, 0x3AC98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC98Cu;
label_3ac98c:
    // 0x3ac98c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3ac98cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3ac990:
    // 0x3ac990: 0x262391a8  addiu       $v1, $s1, -0x6E58
    ctx->pc = 0x3ac990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939048));
label_3ac994:
    // 0x3ac994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ac998:
    // 0x3ac998: 0x40f809  jalr        $v0
label_3ac99c:
    if (ctx->pc == 0x3AC99Cu) {
        ctx->pc = 0x3AC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC998u;
        // 0x3ac99c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9A0u;
        goto label_3ac9a0;
    }
    ctx->pc = 0x3AC998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AC9A0u);
        ctx->pc = 0x3AC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC998u;
        // 0x3ac99c: 0x8c640004  lw          $a0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC998u, 0x3AC9A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AC9A0u;
label_3ac9a0:
    // 0x3ac9a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac9a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ac9a4:
    // 0x3ac9a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ac9a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ac9a8:
    // 0x3ac9a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3ac9a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ac9ac:
    // 0x3ac9ac: 0x3e00008  jr          $ra
label_3ac9b0:
    if (ctx->pc == 0x3AC9B0u) {
        ctx->pc = 0x3AC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9ACu;
        // 0x3ac9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AC9B4u;
        goto label_3ac9b4;
    }
    ctx->pc = 0x3AC9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC9ACu;
        // 0x3ac9b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC9ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC9B4u;
label_3ac9b4:
    // 0x3ac9b4: 0x0  nop
    ctx->pc = 0x3ac9b4u;
    // NOP
    ctx->pc = 0x3ac9b8u;
}
