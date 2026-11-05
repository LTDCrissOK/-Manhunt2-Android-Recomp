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

// Function: sub_0030A478
// Address: 0x30a478 - 0x30a4f8
void sub_0030A478_0x30a478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A478_0x30a478");
#endif

    switch (ctx->pc) {
        case 0x30a48cu: goto label_30a48c;
        case 0x30a494u: goto label_30a494;
        case 0x30a4a8u: goto label_30a4a8;
        case 0x30a4bcu: goto label_30a4bc;
        case 0x30a4c4u: goto label_30a4c4;
        case 0x30a4e4u: goto label_30a4e4;
        default: break;
    }

    ctx->pc = 0x30a478u;

    // 0x30a478: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30a478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30a47c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30a47cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30a480: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30a480u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30a484: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x30A484u;
    SET_GPR_U32(ctx, 31, 0x30A48Cu);
    ctx->pc = 0x30A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A484u;
    // 0x30a488: 0x240401a0  addiu       $a0, $zero, 0x1A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x30A484u, 0x30A48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A48Cu;
label_30a48c:
    // 0x30a48c: 0xc0c294e  jal         func_30A538
    ctx->pc = 0x30A48Cu;
    SET_GPR_U32(ctx, 31, 0x30A494u);
    ctx->pc = 0x30A490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A48Cu;
    // 0x30a490: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A538u, 0x30A48Cu, 0x30A494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A494u;
label_30a494:
    // 0x30a494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x30a494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a498: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A498u;
    {
        const bool branch_taken_0x30a498 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A498u;
        // 0x30a49c: 0x3c04005b  lui         $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a498) {
            ctx->pc = 0x30A4B0u;
            goto label_30a4b0;
        }
    }
    ctx->pc = 0x30A4A0u;
    // 0x30a4a0: 0xc0c293e  jal         func_30A4F8
    ctx->pc = 0x30A4A0u;
    SET_GPR_U32(ctx, 31, 0x30A4A8u);
    ctx->pc = 0x30A4A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4A0u;
    // 0x30a4a4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A4F8u, 0x30A4A0u, 0x30A4A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4A8u;
label_30a4a8:
    // 0x30a4a8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x30A4A8u;
    {
        const bool branch_taken_0x30a4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4A8u;
        // 0x30a4ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a4a8) {
            ctx->pc = 0x30A4E8u;
            goto label_30a4e8;
        }
    }
    ctx->pc = 0x30A4B0u;
label_30a4b0:
    // 0x30a4b0: 0x240500c0  addiu       $a1, $zero, 0xC0
    ctx->pc = 0x30a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x30a4b4: 0xc0b2af0  jal         func_2CABC0
    ctx->pc = 0x30A4B4u;
    SET_GPR_U32(ctx, 31, 0x30A4BCu);
    ctx->pc = 0x30A4B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4B4u;
    // 0x30a4b8: 0x24842170  addiu       $a0, $a0, 0x2170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CABC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CABC0u, 0x30A4B4u, 0x30A4BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4BCu;
label_30a4bc:
    // 0x30a4bc: 0xc0c4808  jal         func_312020
    ctx->pc = 0x30A4BCu;
    SET_GPR_U32(ctx, 31, 0x30A4C4u);
    ctx->pc = 0x30A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4BCu;
    // 0x30a4c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312020u, 0x30A4BCu, 0x30A4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4C4u;
label_30a4c4:
    // 0x30a4c4: 0xae020100  sw          $v0, 0x100($s0)
    ctx->pc = 0x30a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 2));
    // 0x30a4c8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x30a4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x30a4cc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x30a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x30a4d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4d4: 0xc44cbb78  lwc1        $f12, -0x4488($v0)
    ctx->pc = 0x30a4d4u;
    { uint32_t bits = FAST_READ32(0x3FBB78u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x30a4d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x30a4d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a4dc: 0xc0c297a  jal         func_30A5E8
    ctx->pc = 0x30A4DCu;
    SET_GPR_U32(ctx, 31, 0x30A4E4u);
    ctx->pc = 0x30A4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A4DCu;
    // 0x30a4e0: 0xc46dbb74  lwc1        $f13, -0x448C($v1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294949748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5E8u, 0x30A4DCu, 0x30A4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A4E4u;
label_30a4e4:
    // 0x30a4e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30a4e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_30a4e8:
    // 0x30a4e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30a4e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a4ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30a4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30a4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x30A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A4F0u;
        // 0x30a4f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A4F8u;
}
