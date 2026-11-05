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

// Function: sub_0014F408
// Address: 0x14f408 - 0x14f518
void sub_0014F408_0x14f408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F408_0x14f408");
#endif

    switch (ctx->pc) {
        case 0x14f428u: goto label_14f428;
        case 0x14f478u: goto label_14f478;
        case 0x14f4a4u: goto label_14f4a4;
        case 0x14f4c4u: goto label_14f4c4;
        case 0x14f4e0u: goto label_14f4e0;
        case 0x14f4ecu: goto label_14f4ec;
        case 0x14f500u: goto label_14f500;
        default: break;
    }

    ctx->pc = 0x14f408u;

    // 0x14f408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f40c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14f40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14f410: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14f414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14f414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f418: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x14f418u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f41c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f420: 0xc053d4c  jal         func_14F530
    ctx->pc = 0x14F420u;
    SET_GPR_U32(ctx, 31, 0x14F428u);
    ctx->pc = 0x14F424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F420u;
    // 0x14f424: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F530u, 0x14F420u, 0x14F428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F428u;
label_14f428:
    // 0x14f428: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x14f428u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f42c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f430: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F430u;
    {
        const bool branch_taken_0x14f430 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F430u;
        // 0x14f434: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f430) {
            ctx->pc = 0x14F498u;
            goto label_14f498;
        }
    }
    ctx->pc = 0x14F438u;
    // 0x14f438: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F438u;
    {
        const bool branch_taken_0x14f438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14f438) {
            ctx->pc = 0x14F43Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F438u;
            // 0x14f43c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F450u;
            goto label_14f450;
        }
    }
    ctx->pc = 0x14F440u;
    // 0x14f440: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x14F440u;
    {
        const bool branch_taken_0x14f440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F440u;
        // 0x14f444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f440) {
            ctx->pc = 0x14F470u;
            goto label_14f470;
        }
    }
    ctx->pc = 0x14F448u;
    // 0x14f448: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x14F448u;
    {
        const bool branch_taken_0x14f448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F448u;
        // 0x14f44c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f448) {
            ctx->pc = 0x14F504u;
            goto label_14f504;
        }
    }
    ctx->pc = 0x14F450u;
label_14f450:
    // 0x14f450: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x14F450u;
    {
        const bool branch_taken_0x14f450 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14F454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F450u;
        // 0x14f454: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f450) {
            ctx->pc = 0x14F4B8u;
            goto label_14f4b8;
        }
    }
    ctx->pc = 0x14F458u;
    // 0x14f458: 0x5462002a  bnel        $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x14F458u;
    {
        const bool branch_taken_0x14f458 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x14f458) {
            ctx->pc = 0x14F45Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14F458u;
            // 0x14f45c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14F504u;
            goto label_14f504;
        }
    }
    ctx->pc = 0x14F460u;
    // 0x14f460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f464: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f468: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x14F468u;
    {
        const bool branch_taken_0x14f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F468u;
        // 0x14f46c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f468) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F470u;
label_14f470:
    // 0x14f470: 0xc053d6a  jal         func_14F5A8
    ctx->pc = 0x14F470u;
    SET_GPR_U32(ctx, 31, 0x14F478u);
    ctx->pc = 0x14F474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F470u;
    // 0x14f474: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F5A8u, 0x14F470u, 0x14F478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F478u;
label_14f478:
    // 0x14f478: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14F478u;
    {
        const bool branch_taken_0x14f478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F478u;
        // 0x14f47c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f478) {
            ctx->pc = 0x14F48Cu;
            goto label_14f48c;
        }
    }
    ctx->pc = 0x14F480u;
    // 0x14f480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f484: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14F484u;
    {
        const bool branch_taken_0x14f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F484u;
        // 0x14f488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f484) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F48Cu;
label_14f48c:
    // 0x14f48c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f48cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f490: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x14F490u;
    {
        const bool branch_taken_0x14f490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F490u;
        // 0x14f494: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f490) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F498u;
label_14f498:
    // 0x14f498: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f498u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f49c: 0xc053d6a  jal         func_14F5A8
    ctx->pc = 0x14F49Cu;
    SET_GPR_U32(ctx, 31, 0x14F4A4u);
    ctx->pc = 0x14F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F49Cu;
    // 0x14f4a0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F5A8u, 0x14F49Cu, 0x14F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4A4u;
label_14f4a4:
    // 0x14f4a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14F4A4u;
    {
        const bool branch_taken_0x14f4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4A4u;
        // 0x14f4a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4a4) {
            ctx->pc = 0x14F4CCu;
            goto label_14f4cc;
        }
    }
    ctx->pc = 0x14F4ACu;
    // 0x14f4ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f4acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x14F4B0u;
    {
        const bool branch_taken_0x14f4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4B0u;
        // 0x14f4b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4b0) {
            ctx->pc = 0x14F4D8u;
            goto label_14f4d8;
        }
    }
    ctx->pc = 0x14F4B8u;
label_14f4b8:
    // 0x14f4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4bc: 0xc053d6a  jal         func_14F5A8
    ctx->pc = 0x14F4BCu;
    SET_GPR_U32(ctx, 31, 0x14F4C4u);
    ctx->pc = 0x14F4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F4BCu;
    // 0x14f4c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F5A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F5A8u, 0x14F4BCu, 0x14F4C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4C4u;
label_14f4c4:
    // 0x14f4c4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14F4C4u;
    {
        const bool branch_taken_0x14f4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4C4u;
        // 0x14f4c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4c4) {
            ctx->pc = 0x14F4F4u;
            goto label_14f4f4;
        }
    }
    ctx->pc = 0x14F4CCu;
label_14f4cc:
    // 0x14f4cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f4ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f4d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14f4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14f4d8:
    // 0x14f4d8: 0xc053d46  jal         func_14F518
    ctx->pc = 0x14F4D8u;
    SET_GPR_U32(ctx, 31, 0x14F4E0u);
    ctx->pc = 0x14F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F518u, 0x14F4D8u, 0x14F4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4E0u;
label_14f4e0:
    // 0x14f4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4e4: 0xc053d52  jal         func_14F548
    ctx->pc = 0x14F4E4u;
    SET_GPR_U32(ctx, 31, 0x14F4ECu);
    ctx->pc = 0x14F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F4E4u;
    // 0x14f4e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F548u, 0x14F4E4u, 0x14F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F4ECu;
label_14f4ec:
    // 0x14f4ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14F4ECu;
    {
        const bool branch_taken_0x14f4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F4ECu;
        // 0x14f4f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f4ec) {
            ctx->pc = 0x14F504u;
            goto label_14f504;
        }
    }
    ctx->pc = 0x14F4F4u;
label_14f4f4:
    // 0x14f4f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14f4f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f4f8: 0xc053d46  jal         func_14F518
    ctx->pc = 0x14F4F8u;
    SET_GPR_U32(ctx, 31, 0x14F500u);
    ctx->pc = 0x14F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F4F8u;
    // 0x14f4fc: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F518u, 0x14F4F8u, 0x14F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F500u;
label_14f500:
    // 0x14f500: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14f500u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14f504:
    // 0x14f504: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14f504u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14f508: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14f508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f50c: 0x3e00008  jr          $ra
    ctx->pc = 0x14F50Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F50Cu;
        // 0x14f510: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F50Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F514u;
    // 0x14f514: 0x0  nop
    ctx->pc = 0x14f514u;
    // NOP
    ctx->pc = 0x14f518u;
}
