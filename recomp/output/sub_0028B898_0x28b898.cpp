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

// Function: sub_0028B898
// Address: 0x28b898 - 0x28b9b0
void sub_0028B898_0x28b898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B898_0x28b898");
#endif

    switch (ctx->pc) {
        case 0x28b8bcu: goto label_28b8bc;
        case 0x28b8dcu: goto label_28b8dc;
        case 0x28b8fcu: goto label_28b8fc;
        case 0x28b91cu: goto label_28b91c;
        case 0x28b93cu: goto label_28b93c;
        case 0x28b95cu: goto label_28b95c;
        case 0x28b97cu: goto label_28b97c;
        default: break;
    }

    ctx->pc = 0x28b898u;

    // 0x28b898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b89c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28b89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28b8a0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b8a4: 0x24a5b260  addiu       $a1, $a1, -0x4DA0
    ctx->pc = 0x28b8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947424));
    // 0x28b8a8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x28b8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x28b8ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b8acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8b0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x28b8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x28b8b4: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28B8B4u;
    SET_GPR_U32(ctx, 31, 0x28B8BCu);
    ctx->pc = 0x28B8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8B4u;
    // 0x28b8b8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28B8B4u, 0x28B8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8BCu;
label_28b8bc:
    // 0x28b8bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B8BCu;
    {
        const bool branch_taken_0x28b8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8BCu;
        // 0x28b8c0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8bc) {
            ctx->pc = 0x28B8CCu;
            goto label_28b8cc;
        }
    }
    ctx->pc = 0x28B8C4u;
    // 0x28b8c4: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x28B8C4u;
    {
        const bool branch_taken_0x28b8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8C4u;
        // 0x28b8c8: 0xe454a798  swc1        $f20, -0x5868($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944664), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8c4) {
            ctx->pc = 0x28B990u;
            goto label_28b990;
        }
    }
    ctx->pc = 0x28B8CCu;
label_28b8cc:
    // 0x28b8cc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28b8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28b8d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8d4: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28B8D4u;
    SET_GPR_U32(ctx, 31, 0x28B8DCu);
    ctx->pc = 0x28B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8D4u;
    // 0x28b8d8: 0x24a5b270  addiu       $a1, $a1, -0x4D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28B8D4u, 0x28B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8DCu;
label_28b8dc:
    // 0x28b8dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B8DCu;
    {
        const bool branch_taken_0x28b8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8DCu;
        // 0x28b8e0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8dc) {
            ctx->pc = 0x28B8ECu;
            goto label_28b8ec;
        }
    }
    ctx->pc = 0x28B8E4u;
    // 0x28b8e4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x28B8E4u;
    {
        const bool branch_taken_0x28b8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8E4u;
        // 0x28b8e8: 0xe454a79c  swc1        $f20, -0x5864($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944668), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8e4) {
            ctx->pc = 0x28B990u;
            goto label_28b990;
        }
    }
    ctx->pc = 0x28B8ECu;
label_28b8ec:
    // 0x28b8ec: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28b8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28b8f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8f4: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28B8F4u;
    SET_GPR_U32(ctx, 31, 0x28B8FCu);
    ctx->pc = 0x28B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B8F4u;
    // 0x28b8f8: 0x24a5b278  addiu       $a1, $a1, -0x4D88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28B8F4u, 0x28B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B8FCu;
label_28b8fc:
    // 0x28b8fc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B8FCu;
    {
        const bool branch_taken_0x28b8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B8FCu;
        // 0x28b900: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8fc) {
            ctx->pc = 0x28B90Cu;
            goto label_28b90c;
        }
    }
    ctx->pc = 0x28B904u;
    // 0x28b904: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28B904u;
    {
        const bool branch_taken_0x28b904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B904u;
        // 0x28b908: 0xe454a7a0  swc1        $f20, -0x5860($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944672), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b904) {
            ctx->pc = 0x28B990u;
            goto label_28b990;
        }
    }
    ctx->pc = 0x28B90Cu;
label_28b90c:
    // 0x28b90c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28b90cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28b910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b914: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28B914u;
    SET_GPR_U32(ctx, 31, 0x28B91Cu);
    ctx->pc = 0x28B918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B914u;
    // 0x28b918: 0x24a5b280  addiu       $a1, $a1, -0x4D80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28B914u, 0x28B91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B91Cu;
label_28b91c:
    // 0x28b91c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B91Cu;
    {
        const bool branch_taken_0x28b91c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B91Cu;
        // 0x28b920: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b91c) {
            ctx->pc = 0x28B92Cu;
            goto label_28b92c;
        }
    }
    ctx->pc = 0x28B924u;
    // 0x28b924: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28B924u;
    {
        const bool branch_taken_0x28b924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B924u;
        // 0x28b928: 0xe454a7a4  swc1        $f20, -0x585C($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944676), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b924) {
            ctx->pc = 0x28B990u;
            goto label_28b990;
        }
    }
    ctx->pc = 0x28B92Cu;
label_28b92c:
    // 0x28b92c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28b930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b934: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28B934u;
    SET_GPR_U32(ctx, 31, 0x28B93Cu);
    ctx->pc = 0x28B938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B934u;
    // 0x28b938: 0x24a5b290  addiu       $a1, $a1, -0x4D70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28B934u, 0x28B93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B93Cu;
label_28b93c:
    // 0x28b93c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B93Cu;
    {
        const bool branch_taken_0x28b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B93Cu;
        // 0x28b940: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b93c) {
            ctx->pc = 0x28B94Cu;
            goto label_28b94c;
        }
    }
    ctx->pc = 0x28B944u;
    // 0x28b944: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28B944u;
    {
        const bool branch_taken_0x28b944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B944u;
        // 0x28b948: 0xe454a7a8  swc1        $f20, -0x5858($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944680), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b944) {
            ctx->pc = 0x28B990u;
            goto label_28b990;
        }
    }
    ctx->pc = 0x28B94Cu;
label_28b94c:
    // 0x28b94c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28b94cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28b950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b954: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28B954u;
    SET_GPR_U32(ctx, 31, 0x28B95Cu);
    ctx->pc = 0x28B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B954u;
    // 0x28b958: 0x24a5b298  addiu       $a1, $a1, -0x4D68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28B954u, 0x28B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B95Cu;
label_28b95c:
    // 0x28b95c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B95Cu;
    {
        const bool branch_taken_0x28b95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B95Cu;
        // 0x28b960: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b95c) {
            ctx->pc = 0x28B96Cu;
            goto label_28b96c;
        }
    }
    ctx->pc = 0x28B964u;
    // 0x28b964: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28B964u;
    {
        const bool branch_taken_0x28b964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B964u;
        // 0x28b968: 0xe454a7ac  swc1        $f20, -0x5854($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944684), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b964) {
            ctx->pc = 0x28B990u;
            goto label_28b990;
        }
    }
    ctx->pc = 0x28B96Cu;
label_28b96c:
    // 0x28b96c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x28b96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x28b970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b974: 0xc0f0abe  jal         func_3C2AF8
    ctx->pc = 0x28B974u;
    SET_GPR_U32(ctx, 31, 0x28B97Cu);
    ctx->pc = 0x28B978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B974u;
    // 0x28b978: 0x24a5b2a8  addiu       $a1, $a1, -0x4D58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2AF8u, 0x28B974u, 0x28B97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B97Cu;
label_28b97c:
    // 0x28b97c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B97Cu;
    {
        const bool branch_taken_0x28b97c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B97Cu;
        // 0x28b980: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b97c) {
            ctx->pc = 0x28B98Cu;
            goto label_28b98c;
        }
    }
    ctx->pc = 0x28B984u;
    // 0x28b984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28B984u;
    {
        const bool branch_taken_0x28b984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B984u;
        // 0x28b988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b984) {
            ctx->pc = 0x28B994u;
            goto label_28b994;
        }
    }
    ctx->pc = 0x28B98Cu;
label_28b98c:
    // 0x28b98c: 0xe454a7b0  swc1        $f20, -0x5850($v0)
    ctx->pc = 0x28b98cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294944688), bits); }
label_28b990:
    // 0x28b990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28b990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28b994:
    // 0x28b994: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b994u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b998: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x28b998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28b99c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x28b99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28b9a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B9A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B9A0u;
        // 0x28b9a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B9A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B9A8u;
    // 0x28b9a8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28b9a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28b9ac: 0x0  nop
    ctx->pc = 0x28b9acu;
    // NOP
    ctx->pc = 0x28b9b0u;
}
