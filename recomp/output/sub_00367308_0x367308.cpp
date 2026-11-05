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

// Function: sub_00367308
// Address: 0x367308 - 0x3673e8
void sub_00367308_0x367308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367308_0x367308");
#endif

    switch (ctx->pc) {
        case 0x36733cu: goto label_36733c;
        case 0x367378u: goto label_367378;
        case 0x3673a0u: goto label_3673a0;
        case 0x3673ccu: goto label_3673cc;
        default: break;
    }

    ctx->pc = 0x367308u;

    // 0x367308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x367308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x36730c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36730cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x367310: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x367310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x367314: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x367314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367318: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x367318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x36731c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x36731cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367320: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x367320u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x367324: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x367324u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367328: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x367328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x36732c: 0x1220001e  beqz        $s1, . + 4 + (0x1E << 2)
    ctx->pc = 0x36732Cu;
    {
        const bool branch_taken_0x36732c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x367330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36732Cu;
        // 0x367330: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36732c) {
            ctx->pc = 0x3673A8u;
            goto label_3673a8;
        }
    }
    ctx->pc = 0x367334u;
    // 0x367334: 0xc0d9a04  jal         func_366810
    ctx->pc = 0x367334u;
    SET_GPR_U32(ctx, 31, 0x36733Cu);
    ctx->pc = 0x367338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367334u;
    // 0x367338: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x366810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366810u, 0x367334u, 0x36733Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36733Cu;
label_36733c:
    // 0x36733c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x36733cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x367340: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x367340u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x367344: 0x24861ed8  addiu       $a2, $a0, 0x1ED8
    ctx->pc = 0x367344u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 7896));
    // 0x367348: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x367348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x36734c: 0x8c63cb70  lw          $v1, -0x3490($v1)
    ctx->pc = 0x36734cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCB70u));
    // 0x367350: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x367350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x367354: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x367354u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x367358: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x367358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x36735c: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x36735cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x367360: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x367360u;
    {
        const bool branch_taken_0x367360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367360u;
        // 0x367364: 0xacb20004  sw          $s2, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367360) {
            ctx->pc = 0x3673CCu;
            goto label_3673cc;
        }
    }
    ctx->pc = 0x367368u;
    // 0x367368: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x367368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x36736c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x36736Cu;
    {
        const bool branch_taken_0x36736c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x367370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36736Cu;
        // 0x367370: 0x310c0  sll         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36736c) {
            ctx->pc = 0x367390u;
            goto label_367390;
        }
    }
    ctx->pc = 0x367374u;
    // 0x367374: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x367374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_367378:
    // 0x367378: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x367378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x36737c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x36737Cu;
    {
        const bool branch_taken_0x36737c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36737Cu;
        // 0x367380: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36737c) {
            ctx->pc = 0x3673CCu;
            goto label_3673cc;
        }
    }
    ctx->pc = 0x367384u;
    // 0x367384: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x367384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x367388: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x367388u;
    {
        const bool branch_taken_0x367388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367388u;
        // 0x36738c: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367388) {
            ctx->pc = 0x367378u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367378;
        }
    }
    ctx->pc = 0x367390u;
label_367390:
    // 0x367390: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x367390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367394: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x367394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367398: 0xc0d9c16  jal         func_367058
    ctx->pc = 0x367398u;
    SET_GPR_U32(ctx, 31, 0x3673A0u);
    ctx->pc = 0x36739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367398u;
    // 0x36739c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x367058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367058u, 0x367398u, 0x3673A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673A0u;
label_3673a0:
    // 0x3673a0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3673A0u;
    {
        const bool branch_taken_0x3673a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3673A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673A0u;
        // 0x3673a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3673a0) {
            ctx->pc = 0x3673D0u;
            goto label_3673d0;
        }
    }
    ctx->pc = 0x3673A8u;
label_3673a8:
    // 0x3673a8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3673a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3673ac: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x3673acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x3673b0: 0x24421ed8  addiu       $v0, $v0, 0x1ED8
    ctx->pc = 0x3673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7896));
    // 0x3673b4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3673b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3673b8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x3673b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3673bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3673bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3673c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3673c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3673c4: 0xc0d9d04  jal         func_367410
    ctx->pc = 0x3673C4u;
    SET_GPR_U32(ctx, 31, 0x3673CCu);
    ctx->pc = 0x3673C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3673C4u;
    // 0x3673c8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367410u, 0x3673C4u, 0x3673CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3673CCu;
label_3673cc:
    // 0x3673cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3673ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3673d0:
    // 0x3673d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3673d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3673d4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3673d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3673d8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3673d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3673dc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3673dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3673e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3673E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3673E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3673E0u;
        // 0x3673e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3673E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3673E8u;
}
