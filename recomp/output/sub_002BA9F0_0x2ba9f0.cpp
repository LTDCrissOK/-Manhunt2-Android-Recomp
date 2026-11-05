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

// Function: sub_002BA9F0
// Address: 0x2ba9f0 - 0x2bab08
void sub_002BA9F0_0x2ba9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA9F0_0x2ba9f0");
#endif

    switch (ctx->pc) {
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baaf0u: goto label_2baaf0;
        default: break;
    }

    ctx->pc = 0x2ba9f0u;

    // 0x2ba9f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2ba9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2ba9f4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2ba9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2ba9f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ba9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ba9fc: 0x24a5ef60  addiu       $a1, $a1, -0x10A0
    ctx->pc = 0x2ba9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963040));
    // 0x2baa00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2baa00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa04: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2baa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2baa08: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x2BAA08u;
    SET_GPR_U32(ctx, 31, 0x2BAA10u);
    ctx->pc = 0x2BAA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA08u;
    // 0x2baa0c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x2BAA08u, 0x2BAA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA10u;
label_2baa10:
    // 0x2baa10: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2baa10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2baa14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baa14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa18: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x2BAA18u;
    SET_GPR_U32(ctx, 31, 0x2BAA20u);
    ctx->pc = 0x2BAA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA18u;
    // 0x2baa1c: 0x24a500a0  addiu       $a1, $a1, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x2BAA18u, 0x2BAA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA20u;
label_2baa20:
    // 0x2baa20: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x2baa20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x2baa24: 0x8c6325a4  lw          $v1, 0x25A4($v1)
    ctx->pc = 0x2baa24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C25A4u));
    // 0x2baa28: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2baa28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2baa2c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2BAA2Cu;
    {
        const bool branch_taken_0x2baa2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA2Cu;
        // 0x2baa30: 0x3c020047  lui         $v0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa2c) {
            ctx->pc = 0x2BAAC4u;
            goto label_2baac4;
        }
    }
    ctx->pc = 0x2BAA34u;
    // 0x2baa34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2baa34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2baa38: 0x244200b0  addiu       $v0, $v0, 0xB0
    ctx->pc = 0x2baa38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    // 0x2baa3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2baa3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2baa40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2baa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2baa44: 0x800008  jr          $a0
    ctx->pc = 0x2BAA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BAA4Cu: goto label_2baa4c;
            case 0x2BAA64u: goto label_2baa64;
            case 0x2BAA7Cu: goto label_2baa7c;
            case 0x2BAA94u: goto label_2baa94;
            case 0x2BAAACu: goto label_2baaac;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAA44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BAA4Cu;
label_2baa4c:
    // 0x2baa4c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2baa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2baa50: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baa50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa54: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x2BAA54u;
    SET_GPR_U32(ctx, 31, 0x2BAA5Cu);
    ctx->pc = 0x2BAA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA54u;
    // 0x2baa58: 0x24a5f080  addiu       $a1, $a1, -0xF80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x2BAA54u, 0x2BAA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA5Cu;
label_2baa5c:
    // 0x2baa5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2BAA5Cu;
    {
        const bool branch_taken_0x2baa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA5Cu;
        // 0x2baa60: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa5c) {
            ctx->pc = 0x2BAAD8u;
            goto label_2baad8;
        }
    }
    ctx->pc = 0x2BAA64u;
label_2baa64:
    // 0x2baa64: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2baa64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2baa68: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baa68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa6c: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x2BAA6Cu;
    SET_GPR_U32(ctx, 31, 0x2BAA74u);
    ctx->pc = 0x2BAA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA6Cu;
    // 0x2baa70: 0x24a5f088  addiu       $a1, $a1, -0xF78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x2BAA6Cu, 0x2BAA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA74u;
label_2baa74:
    // 0x2baa74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2BAA74u;
    {
        const bool branch_taken_0x2baa74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA74u;
        // 0x2baa78: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa74) {
            ctx->pc = 0x2BAAD8u;
            goto label_2baad8;
        }
    }
    ctx->pc = 0x2BAA7Cu;
label_2baa7c:
    // 0x2baa7c: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2baa7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2baa80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa84: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x2BAA84u;
    SET_GPR_U32(ctx, 31, 0x2BAA8Cu);
    ctx->pc = 0x2BAA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA84u;
    // 0x2baa88: 0x24a5f090  addiu       $a1, $a1, -0xF70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x2BAA84u, 0x2BAA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAA8Cu;
label_2baa8c:
    // 0x2baa8c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2BAA8Cu;
    {
        const bool branch_taken_0x2baa8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA8Cu;
        // 0x2baa90: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa8c) {
            ctx->pc = 0x2BAAD8u;
            goto label_2baad8;
        }
    }
    ctx->pc = 0x2BAA94u;
label_2baa94:
    // 0x2baa94: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2baa94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2baa98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baa98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baa9c: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x2BAA9Cu;
    SET_GPR_U32(ctx, 31, 0x2BAAA4u);
    ctx->pc = 0x2BAAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAA9Cu;
    // 0x2baaa0: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x2BAA9Cu, 0x2BAAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAAA4u;
label_2baaa4:
    // 0x2baaa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2BAAA4u;
    {
        const bool branch_taken_0x2baaa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAA4u;
        // 0x2baaa8: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baaa4) {
            ctx->pc = 0x2BAAD8u;
            goto label_2baad8;
        }
    }
    ctx->pc = 0x2BAAACu;
label_2baaac:
    // 0x2baaac: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x2baaacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x2baab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baab4: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x2BAAB4u;
    SET_GPR_U32(ctx, 31, 0x2BAABCu);
    ctx->pc = 0x2BAAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAAB4u;
    // 0x2baab8: 0x24a5f0a0  addiu       $a1, $a1, -0xF60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x2BAAB4u, 0x2BAABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAABCu;
label_2baabc:
    // 0x2baabc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2BAABCu;
    {
        const bool branch_taken_0x2baabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAABCu;
        // 0x2baac0: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baabc) {
            ctx->pc = 0x2BAAD8u;
            goto label_2baad8;
        }
    }
    ctx->pc = 0x2BAAC4u;
label_2baac4:
    // 0x2baac4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baac8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2BAAC8u;
    SET_GPR_U32(ctx, 31, 0x2BAAD0u);
    ctx->pc = 0x2BAACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAAC8u;
    // 0x2baacc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2BAAC8u, 0x2BAAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAAD0u;
label_2baad0:
    // 0x2baad0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2BAAD0u;
    {
        const bool branch_taken_0x2baad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAD0u;
        // 0x2baad4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baad0) {
            ctx->pc = 0x2BAAF4u;
            goto label_2baaf4;
        }
    }
    ctx->pc = 0x2BAAD8u;
label_2baad8:
    // 0x2baad8: 0xc0aeb26  jal         func_2BAC98
    ctx->pc = 0x2BAAD8u;
    SET_GPR_U32(ctx, 31, 0x2BAAE0u);
    ctx->pc = 0x2BAADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAAD8u;
    // 0x2baadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAC98u, 0x2BAAD8u, 0x2BAAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAAE0u;
label_2baae0:
    // 0x2baae0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2baae0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baae4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2baae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2baae8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2BAAE8u;
    SET_GPR_U32(ctx, 31, 0x2BAAF0u);
    ctx->pc = 0x2BAAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAAE8u;
    // 0x2baaec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2BAAE8u, 0x2BAAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAAF0u;
label_2baaf0:
    // 0x2baaf0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2baaf0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2baaf4:
    // 0x2baaf4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2baaf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baaf8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2baaf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baafc: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAFCu;
        // 0x2bab00: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAB04u;
    // 0x2bab04: 0x0  nop
    ctx->pc = 0x2bab04u;
    // NOP
    ctx->pc = 0x2bab08u;
}
