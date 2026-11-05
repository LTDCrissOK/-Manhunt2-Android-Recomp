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

// Function: sub_0012F3D8
// Address: 0x12f3d8 - 0x12f660
void sub_0012F3D8_0x12f3d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F3D8_0x12f3d8");
#endif

    switch (ctx->pc) {
        case 0x12f424u: goto label_12f424;
        case 0x12f45cu: goto label_12f45c;
        case 0x12f47cu: goto label_12f47c;
        case 0x12f4d8u: goto label_12f4d8;
        case 0x12f4f4u: goto label_12f4f4;
        case 0x12f50cu: goto label_12f50c;
        case 0x12f554u: goto label_12f554;
        case 0x12f5a0u: goto label_12f5a0;
        case 0x12f5fcu: goto label_12f5fc;
        case 0x12f610u: goto label_12f610;
        default: break;
    }

    ctx->pc = 0x12f3d8u;

    // 0x12f3d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12f3d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12f3dc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x12f3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12f3e0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x12f3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x12f3e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f3e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3e8: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x12f3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x12f3ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12f3ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12f3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x12f3f4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x12f3f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f3f8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x12f3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x12f3fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12f3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f400: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x12f400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x12f404: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x12f404u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f408: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x12f408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x12f40c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12f40cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f410: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12f410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x12f414: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x12f414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x12f418: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x12f418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x12f41c: 0xc046144  jal         func_118510
    ctx->pc = 0x12F41Cu;
    SET_GPR_U32(ctx, 31, 0x12F424u);
    ctx->pc = 0x12F420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F41Cu;
    // 0x12f420: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118510u, 0x12F41Cu, 0x12F424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F424u;
label_12f424:
    // 0x12f424: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x12f424u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f428: 0x2e820022  sltiu       $v0, $s4, 0x22
    ctx->pc = 0x12f428u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x12f42c: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x12F42Cu;
    {
        const bool branch_taken_0x12f42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F42Cu;
        // 0x12f430: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f42c) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F434u;
    // 0x12f434: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x12f434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x12f438: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x12f438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x12f43c: 0x2442dcb0  addiu       $v0, $v0, -0x2350
    ctx->pc = 0x12f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958256));
    // 0x12f440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12f440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12f444: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12f444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12f448: 0x800008  jr          $a0
    ctx->pc = 0x12F448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12F450u: goto label_12f450;
            case 0x12F46Cu: goto label_12f46c;
            case 0x12F474u: goto label_12f474;
            case 0x12F484u: goto label_12f484;
            case 0x12F48Cu: goto label_12f48c;
            case 0x12F494u: goto label_12f494;
            case 0x12F4A4u: goto label_12f4a4;
            case 0x12F4B4u: goto label_12f4b4;
            case 0x12F4C4u: goto label_12f4c4;
            case 0x12F4E0u: goto label_12f4e0;
            case 0x12F4E8u: goto label_12f4e8;
            case 0x12F4F8u: goto label_12f4f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F448u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12F450u;
label_12f450:
    // 0x12f450: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f454: 0xc04bf7c  jal         func_12FDF0
    ctx->pc = 0x12F454u;
    SET_GPR_U32(ctx, 31, 0x12F45Cu);
    ctx->pc = 0x12F458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F454u;
    // 0x12f458: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FDF0u, 0x12F454u, 0x12F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F45Cu;
label_12f45c:
    // 0x12f45c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f460: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x12f460u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f464: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x12F464u;
    {
        const bool branch_taken_0x12f464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F464u;
        // 0x12f468: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f464) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F46Cu;
label_12f46c:
    // 0x12f46c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x12F46Cu;
    {
        const bool branch_taken_0x12f46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F46Cu;
        // 0x12f470: 0x2412019b  addiu       $s2, $zero, 0x19B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 411));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f46c) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F474u;
label_12f474:
    // 0x12f474: 0xc04bfac  jal         func_12FEB0
    ctx->pc = 0x12F474u;
    SET_GPR_U32(ctx, 31, 0x12F47Cu);
    ctx->pc = 0x12F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F474u;
    // 0x12f478: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FEB0u, 0x12F474u, 0x12F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F47Cu;
label_12f47c:
    // 0x12f47c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x12F47Cu;
    {
        const bool branch_taken_0x12f47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F47Cu;
        // 0x12f480: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f47c) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F484u;
label_12f484:
    // 0x12f484: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x12F484u;
    {
        const bool branch_taken_0x12f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F484u;
        // 0x12f488: 0x2412019a  addiu       $s2, $zero, 0x19A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 410));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f484) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F48Cu;
label_12f48c:
    // 0x12f48c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x12F48Cu;
    {
        const bool branch_taken_0x12f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F48Cu;
        // 0x12f490: 0x24120193  addiu       $s2, $zero, 0x193 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 403));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f48c) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F494u;
label_12f494:
    // 0x12f494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f498: 0x24050198  addiu       $a1, $zero, 0x198
    ctx->pc = 0x12f498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 408));
    // 0x12f49c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x12F49Cu;
    {
        const bool branch_taken_0x12f49c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F49Cu;
        // 0x12f4a0: 0x24060199  addiu       $a2, $zero, 0x199 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 409));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f49c) {
            ctx->pc = 0x12F4D0u;
            goto label_12f4d0;
        }
    }
    ctx->pc = 0x12F4A4u;
label_12f4a4:
    // 0x12f4a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4a8: 0x24050196  addiu       $a1, $zero, 0x196
    ctx->pc = 0x12f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
    // 0x12f4ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12F4ACu;
    {
        const bool branch_taken_0x12f4ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4ACu;
        // 0x12f4b0: 0x24060197  addiu       $a2, $zero, 0x197 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4ac) {
            ctx->pc = 0x12F4D0u;
            goto label_12f4d0;
        }
    }
    ctx->pc = 0x12F4B4u;
label_12f4b4:
    // 0x12f4b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f4b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4b8: 0x240501aa  addiu       $a1, $zero, 0x1AA
    ctx->pc = 0x12f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 426));
    // 0x12f4bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12F4BCu;
    {
        const bool branch_taken_0x12f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4BCu;
        // 0x12f4c0: 0x240601ad  addiu       $a2, $zero, 0x1AD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 429));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4bc) {
            ctx->pc = 0x12F4D0u;
            goto label_12f4d0;
        }
    }
    ctx->pc = 0x12F4C4u;
label_12f4c4:
    // 0x12f4c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4c8: 0x2405019c  addiu       $a1, $zero, 0x19C
    ctx->pc = 0x12f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 412));
    // 0x12f4cc: 0x2406019e  addiu       $a2, $zero, 0x19E
    ctx->pc = 0x12f4ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 414));
label_12f4d0:
    // 0x12f4d0: 0xc04bf24  jal         func_12FC90
    ctx->pc = 0x12F4D0u;
    SET_GPR_U32(ctx, 31, 0x12F4D8u);
    ctx->pc = 0x12F4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F4D0u;
    // 0x12f4d4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FC90u, 0x12F4D0u, 0x12F4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4D8u;
label_12f4d8:
    // 0x12f4d8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x12F4D8u;
    {
        const bool branch_taken_0x12f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4D8u;
        // 0x12f4dc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4d8) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F4E0u;
label_12f4e0:
    // 0x12f4e0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x12F4E0u;
    {
        const bool branch_taken_0x12f4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4E0u;
        // 0x12f4e4: 0x24120196  addiu       $s2, $zero, 0x196 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 406));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4e0) {
            ctx->pc = 0x12F4F8u;
            goto label_12f4f8;
        }
    }
    ctx->pc = 0x12F4E8u;
label_12f4e8:
    // 0x12f4e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x12f4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f4ec: 0xc046356  jal         func_118D58
    ctx->pc = 0x12F4ECu;
    SET_GPR_U32(ctx, 31, 0x12F4F4u);
    ctx->pc = 0x12F4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F4ECu;
    // 0x12f4f0: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118D58u, 0x12F4ECu, 0x12F4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F4F4u;
label_12f4f4:
    // 0x12f4f4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x12f4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_12f4f8:
    // 0x12f4f8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12f4fc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x12f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f500: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x12f500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x12f504: 0xc047866  jal         func_11E198
    ctx->pc = 0x12F504u;
    SET_GPR_U32(ctx, 31, 0x12F50Cu);
    ctx->pc = 0x12F508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F504u;
    // 0x12f508: 0x12982b  sltu        $s3, $zero, $s2 (Delay Slot)
    SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x12F504u, 0x12F50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F50Cu;
label_12f50c:
    // 0x12f50c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x12f50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f510: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12f510u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f514: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x12f514u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12f518: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x12f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x12f51c: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x12f51cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x12f520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12f520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12f524: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12f524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x12f528: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F528u;
    {
        const bool branch_taken_0x12f528 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F528u;
        // 0x12f52c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f528) {
            ctx->pc = 0x12F540u;
            goto label_12f540;
        }
    }
    ctx->pc = 0x12F530u;
    // 0x12f530: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12F530u;
    {
        const bool branch_taken_0x12f530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f530) {
            ctx->pc = 0x12F534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F530u;
            // 0x12f534: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F540u;
            goto label_12f540;
        }
    }
    ctx->pc = 0x12F538u;
    // 0x12f538: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F538u;
    {
        const bool branch_taken_0x12f538 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f538) {
            ctx->pc = 0x12F53Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F538u;
            // 0x12f53c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F540u;
            goto label_12f540;
        }
    }
    ctx->pc = 0x12F540u;
label_12f540:
    // 0x12f540: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F540u;
    {
        const bool branch_taken_0x12f540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F540u;
        // 0x12f544: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f540) {
            ctx->pc = 0x12F55Cu;
            goto label_12f55c;
        }
    }
    ctx->pc = 0x12F548u;
    // 0x12f548: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f54c: 0xc08e0a2  jal         func_238288
    ctx->pc = 0x12F54Cu;
    SET_GPR_U32(ctx, 31, 0x12F554u);
    ctx->pc = 0x12F550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F54Cu;
    // 0x12f550: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238288u, 0x12F54Cu, 0x12F554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F554u;
label_12f554:
    // 0x12f554: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12F554u;
    {
        const bool branch_taken_0x12f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F554u;
        // 0x12f558: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f554) {
            ctx->pc = 0x12F564u;
            goto label_12f564;
        }
    }
    ctx->pc = 0x12F55Cu;
label_12f55c:
    // 0x12f55c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12f55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12f560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12f560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12f564:
    // 0x12f564: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x12f564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12f568: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F568u;
    {
        const bool branch_taken_0x12f568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F568u;
        // 0x12f56c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f568) {
            ctx->pc = 0x12F58Cu;
            goto label_12f58c;
        }
    }
    ctx->pc = 0x12F570u;
    // 0x12f570: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f574: 0xae140020  sw          $s4, 0x20($s0)
    ctx->pc = 0x12f574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 20));
    // 0x12f578: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12f578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x12f57c: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x12f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x12f580: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12f580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12f584: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x12f584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x12f588: 0xae16001c  sw          $s6, 0x1C($s0)
    ctx->pc = 0x12f588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 22));
label_12f58c:
    // 0x12f58c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F58Cu;
    {
        const bool branch_taken_0x12f58c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F58Cu;
        // 0x12f590: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f58c) {
            ctx->pc = 0x12F5A8u;
            goto label_12f5a8;
        }
    }
    ctx->pc = 0x12F594u;
    // 0x12f594: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f598: 0xc04beee  jal         func_12FBB8
    ctx->pc = 0x12F598u;
    SET_GPR_U32(ctx, 31, 0x12F5A0u);
    ctx->pc = 0x12F59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F598u;
    // 0x12f59c: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12FBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12FBB8u, 0x12F598u, 0x12F5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5A0u;
label_12f5a0:
    // 0x12f5a0: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x12F5A0u;
    {
        const bool branch_taken_0x12f5a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5A0u;
        // 0x12f5a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5a0) {
            ctx->pc = 0x12F630u;
            goto label_12f630;
        }
    }
    ctx->pc = 0x12F5A8u;
label_12f5a8:
    // 0x12f5a8: 0x1260000d  beqz        $s3, . + 4 + (0xD << 2)
    ctx->pc = 0x12F5A8u;
    {
        const bool branch_taken_0x12f5a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5A8u;
        // 0x12f5ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5a8) {
            ctx->pc = 0x12F5E0u;
            goto label_12f5e0;
        }
    }
    ctx->pc = 0x12F5B0u;
    // 0x12f5b0: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x12f5b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12f5b4: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x12f5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f5b8: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x12f5b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x12f5bc: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x12f5bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12f5c0: 0x52db8  dsll        $a1, $a1, 22
    ctx->pc = 0x12f5c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 22);
    // 0x12f5c4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x12f5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x12f5c8: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x12f5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
    // 0x12f5cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x12f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f5d0: 0xac640240  sw          $a0, 0x240($v1)
    ctx->pc = 0x12f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 576), GPR_U32(ctx, 4));
    // 0x12f5d4: 0xde221020  ld          $v0, 0x1020($s1)
    ctx->pc = 0x12f5d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 4128)));
    // 0x12f5d8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12f5dc: 0xfe221020  sd          $v0, 0x1020($s1)
    ctx->pc = 0x12f5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 4128), GPR_U64(ctx, 2));
label_12f5e0:
    // 0x12f5e0: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x12F5E0u;
    {
        const bool branch_taken_0x12f5e0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5E0u;
        // 0x12f5e4: 0x3c050033  lui         $a1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5e0) {
            ctx->pc = 0x12F5FCu;
            goto label_12f5fc;
        }
    }
    ctx->pc = 0x12F5E8u;
    // 0x12f5e8: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x12f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
    // 0x12f5ec: 0x24a57f78  addiu       $a1, $a1, 0x7F78
    ctx->pc = 0x12f5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32632));
    // 0x12f5f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12f5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f5f4: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x12F5F4u;
    SET_GPR_U32(ctx, 31, 0x12F5FCu);
    ctx->pc = 0x12F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F5F4u;
    // 0x12f5f8: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x12F5F4u, 0x12F5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F5FCu;
label_12f5fc:
    // 0x12f5fc: 0x13c00005  beqz        $fp, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F5FCu;
    {
        const bool branch_taken_0x12f5fc = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F5FCu;
        // 0x12f600: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f5fc) {
            ctx->pc = 0x12F614u;
            goto label_12f614;
        }
    }
    ctx->pc = 0x12F604u;
    // 0x12f604: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x12f604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12f608: 0xc044086  jal         func_110218
    ctx->pc = 0x12F608u;
    SET_GPR_U32(ctx, 31, 0x12F610u);
    ctx->pc = 0x12F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F608u;
    // 0x12f60c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110218u, 0x12F608u, 0x12F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F610u;
label_12f610:
    // 0x12f610: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x12f610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_12f614:
    // 0x12f614: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12F614u;
    {
        const bool branch_taken_0x12f614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F614u;
        // 0x12f618: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f614) {
            ctx->pc = 0x12F628u;
            goto label_12f628;
        }
    }
    ctx->pc = 0x12F61Cu;
    // 0x12f61c: 0x56600001  bnel        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F61Cu;
    {
        const bool branch_taken_0x12f61c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f61c) {
            ctx->pc = 0x12F620u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F61Cu;
            // 0x12f620: 0xae12002c  sw          $s2, 0x2C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F624u;
            goto label_12f624;
        }
    }
    ctx->pc = 0x12F624u;
label_12f624:
    // 0x12f624: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12f624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12f628:
    // 0x12f628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12f62c: 0xe6e00000  swc1        $f0, 0x0($s7)
    ctx->pc = 0x12f62cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
label_12f630:
    // 0x12f630: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x12f630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f634: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x12f634u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12f638: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12f638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f63c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x12f63cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f640: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x12f640u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f644: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x12f644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x12f648: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x12f648u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f64c: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x12f64cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12f650: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x12f650u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f654: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x12f654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x12f658: 0x3e00008  jr          $ra
    ctx->pc = 0x12F658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F658u;
        // 0x12f65c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F660u;
}
