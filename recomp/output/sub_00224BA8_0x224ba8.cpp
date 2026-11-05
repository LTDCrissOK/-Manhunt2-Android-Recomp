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

// Function: sub_00224BA8
// Address: 0x224ba8 - 0x224d28
void sub_00224BA8_0x224ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00224BA8_0x224ba8");
#endif

    switch (ctx->pc) {
        case 0x224bdcu: goto label_224bdc;
        case 0x224bf0u: goto label_224bf0;
        case 0x224c08u: goto label_224c08;
        case 0x224c1cu: goto label_224c1c;
        case 0x224c34u: goto label_224c34;
        case 0x224c48u: goto label_224c48;
        case 0x224c60u: goto label_224c60;
        case 0x224c74u: goto label_224c74;
        case 0x224c8cu: goto label_224c8c;
        case 0x224ca0u: goto label_224ca0;
        case 0x224cb8u: goto label_224cb8;
        case 0x224cccu: goto label_224ccc;
        case 0x224ce4u: goto label_224ce4;
        case 0x224cfcu: goto label_224cfc;
        case 0x224d0cu: goto label_224d0c;
        default: break;
    }

    ctx->pc = 0x224ba8u;

    // 0x224ba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x224ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x224bac: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x224bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x224bb0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x224bb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x224bb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x224bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x224bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x224bbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x224bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x224bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x224bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224bc4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224bc8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x224bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x224bcc: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x224bccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x224bd0: 0x24a53d50  addiu       $a1, $a1, 0x3D50
    ctx->pc = 0x224bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15696));
    // 0x224bd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224BD4u;
    SET_GPR_U32(ctx, 31, 0x224BDCu);
    ctx->pc = 0x224BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BD4u;
    // 0x224bd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224BD4u, 0x224BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BDCu;
label_224bdc:
    // 0x224bdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224be0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224BE0u;
    {
        const bool branch_taken_0x224be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BE0u;
        // 0x224be4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224be0) {
            ctx->pc = 0x224BF8u;
            goto label_224bf8;
        }
    }
    ctx->pc = 0x224BE8u;
    // 0x224be8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224BE8u;
    SET_GPR_U32(ctx, 31, 0x224BF0u);
    ctx->pc = 0x224BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224BE8u;
    // 0x224bec: 0x26250060  addiu       $a1, $s1, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224BE8u, 0x224BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224BF0u;
label_224bf0:
    // 0x224bf0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x224BF0u;
    {
        const bool branch_taken_0x224bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224BF0u;
        // 0x224bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224bf0) {
            ctx->pc = 0x224D10u;
            goto label_224d10;
        }
    }
    ctx->pc = 0x224BF8u;
label_224bf8:
    // 0x224bf8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c00: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224C00u;
    SET_GPR_U32(ctx, 31, 0x224C08u);
    ctx->pc = 0x224C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C00u;
    // 0x224c04: 0x24a53d60  addiu       $a1, $a1, 0x3D60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224C00u, 0x224C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C08u;
label_224c08:
    // 0x224c08: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224c0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224C0Cu;
    {
        const bool branch_taken_0x224c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C0Cu;
        // 0x224c10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c0c) {
            ctx->pc = 0x224C24u;
            goto label_224c24;
        }
    }
    ctx->pc = 0x224C14u;
    // 0x224c14: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224C14u;
    SET_GPR_U32(ctx, 31, 0x224C1Cu);
    ctx->pc = 0x224C18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C14u;
    // 0x224c18: 0x26250064  addiu       $a1, $s1, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224C14u, 0x224C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C1Cu;
label_224c1c:
    // 0x224c1c: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x224C1Cu;
    {
        const bool branch_taken_0x224c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C1Cu;
        // 0x224c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c1c) {
            ctx->pc = 0x224D10u;
            goto label_224d10;
        }
    }
    ctx->pc = 0x224C24u;
label_224c24:
    // 0x224c24: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224c24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224c28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c2c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224C2Cu;
    SET_GPR_U32(ctx, 31, 0x224C34u);
    ctx->pc = 0x224C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C2Cu;
    // 0x224c30: 0x24a53d70  addiu       $a1, $a1, 0x3D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224C2Cu, 0x224C34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C34u;
label_224c34:
    // 0x224c34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224c38: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224C38u;
    {
        const bool branch_taken_0x224c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C38u;
        // 0x224c3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c38) {
            ctx->pc = 0x224C50u;
            goto label_224c50;
        }
    }
    ctx->pc = 0x224C40u;
    // 0x224c40: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224C40u;
    SET_GPR_U32(ctx, 31, 0x224C48u);
    ctx->pc = 0x224C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C40u;
    // 0x224c44: 0x26250068  addiu       $a1, $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224C40u, 0x224C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C48u;
label_224c48:
    // 0x224c48: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x224C48u;
    {
        const bool branch_taken_0x224c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C48u;
        // 0x224c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c48) {
            ctx->pc = 0x224D10u;
            goto label_224d10;
        }
    }
    ctx->pc = 0x224C50u;
label_224c50:
    // 0x224c50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c58: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224C58u;
    SET_GPR_U32(ctx, 31, 0x224C60u);
    ctx->pc = 0x224C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C58u;
    // 0x224c5c: 0x24a53d88  addiu       $a1, $a1, 0x3D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224C58u, 0x224C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C60u;
label_224c60:
    // 0x224c60: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224c64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224C64u;
    {
        const bool branch_taken_0x224c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C64u;
        // 0x224c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c64) {
            ctx->pc = 0x224C7Cu;
            goto label_224c7c;
        }
    }
    ctx->pc = 0x224C6Cu;
    // 0x224c6c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224C6Cu;
    SET_GPR_U32(ctx, 31, 0x224C74u);
    ctx->pc = 0x224C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C6Cu;
    // 0x224c70: 0x2625006c  addiu       $a1, $s1, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224C6Cu, 0x224C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C74u;
label_224c74:
    // 0x224c74: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x224C74u;
    {
        const bool branch_taken_0x224c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C74u;
        // 0x224c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c74) {
            ctx->pc = 0x224D10u;
            goto label_224d10;
        }
    }
    ctx->pc = 0x224C7Cu;
label_224c7c:
    // 0x224c7c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224c80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224c84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224C84u;
    SET_GPR_U32(ctx, 31, 0x224C8Cu);
    ctx->pc = 0x224C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C84u;
    // 0x224c88: 0x24a53da8  addiu       $a1, $a1, 0x3DA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224C84u, 0x224C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224C8Cu;
label_224c8c:
    // 0x224c8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224c90: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224C90u;
    {
        const bool branch_taken_0x224c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224C90u;
        // 0x224c94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224c90) {
            ctx->pc = 0x224CA8u;
            goto label_224ca8;
        }
    }
    ctx->pc = 0x224C98u;
    // 0x224c98: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224C98u;
    SET_GPR_U32(ctx, 31, 0x224CA0u);
    ctx->pc = 0x224C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224C98u;
    // 0x224c9c: 0x26250070  addiu       $a1, $s1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224C98u, 0x224CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CA0u;
label_224ca0:
    // 0x224ca0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x224CA0u;
    {
        const bool branch_taken_0x224ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CA0u;
        // 0x224ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ca0) {
            ctx->pc = 0x224D10u;
            goto label_224d10;
        }
    }
    ctx->pc = 0x224CA8u;
label_224ca8:
    // 0x224ca8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cb0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224CB0u;
    SET_GPR_U32(ctx, 31, 0x224CB8u);
    ctx->pc = 0x224CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CB0u;
    // 0x224cb4: 0x24a53dc0  addiu       $a1, $a1, 0x3DC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224CB0u, 0x224CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CB8u;
label_224cb8:
    // 0x224cb8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224cbc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x224CBCu;
    {
        const bool branch_taken_0x224cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CBCu;
        // 0x224cc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cbc) {
            ctx->pc = 0x224CD4u;
            goto label_224cd4;
        }
    }
    ctx->pc = 0x224CC4u;
    // 0x224cc4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224CC4u;
    SET_GPR_U32(ctx, 31, 0x224CCCu);
    ctx->pc = 0x224CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CC4u;
    // 0x224cc8: 0x26250074  addiu       $a1, $s1, 0x74 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224CC4u, 0x224CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CCCu;
label_224ccc:
    // 0x224ccc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x224CCCu;
    {
        const bool branch_taken_0x224ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CCCu;
        // 0x224cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ccc) {
            ctx->pc = 0x224D10u;
            goto label_224d10;
        }
    }
    ctx->pc = 0x224CD4u;
label_224cd4:
    // 0x224cd4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x224cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x224cd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x224cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cdc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x224CDCu;
    SET_GPR_U32(ctx, 31, 0x224CE4u);
    ctx->pc = 0x224CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CDCu;
    // 0x224ce0: 0x24a53dd8  addiu       $a1, $a1, 0x3DD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x224CDCu, 0x224CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CE4u;
label_224ce4:
    // 0x224ce4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x224ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x224ce8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224CE8u;
    {
        const bool branch_taken_0x224ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x224CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CE8u;
        // 0x224cec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224ce8) {
            ctx->pc = 0x224D04u;
            goto label_224d04;
        }
    }
    ctx->pc = 0x224CF0u;
    // 0x224cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224cf4: 0xc08920a  jal         func_224828
    ctx->pc = 0x224CF4u;
    SET_GPR_U32(ctx, 31, 0x224CFCu);
    ctx->pc = 0x224CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224CF4u;
    // 0x224cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x224828u, 0x224CF4u, 0x224CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224CFCu;
label_224cfc:
    // 0x224cfc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x224CFCu;
    {
        const bool branch_taken_0x224cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224CFCu;
        // 0x224d00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224cfc) {
            ctx->pc = 0x224D14u;
            goto label_224d14;
        }
    }
    ctx->pc = 0x224D04u;
label_224d04:
    // 0x224d04: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x224D04u;
    SET_GPR_U32(ctx, 31, 0x224D0Cu);
    ctx->pc = 0x224D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224D04u;
    // 0x224d08: 0x26250078  addiu       $a1, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x224D04u, 0x224D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224D0Cu;
label_224d0c:
    // 0x224d0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x224d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224d10:
    // 0x224d10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x224d10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_224d14:
    // 0x224d14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x224d14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x224d18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x224d18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x224d1c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x224d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x224d20: 0x3e00008  jr          $ra
    ctx->pc = 0x224D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224D20u;
        // 0x224d24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224D28u;
}
