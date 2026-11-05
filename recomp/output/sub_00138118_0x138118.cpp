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

// Function: sub_00138118
// Address: 0x138118 - 0x138300
void sub_00138118_0x138118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138118_0x138118");
#endif

    switch (ctx->pc) {
        case 0x13814cu: goto label_13814c;
        case 0x138160u: goto label_138160;
        case 0x1381d8u: goto label_1381d8;
        case 0x1381e8u: goto label_1381e8;
        case 0x138234u: goto label_138234;
        case 0x138284u: goto label_138284;
        case 0x1382c0u: goto label_1382c0;
        case 0x1382e4u: goto label_1382e4;
        default: break;
    }

    ctx->pc = 0x138118u;

    // 0x138118: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x138118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13811c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x13811cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x138120: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138124: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x138124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138128: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x138128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13812c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13812cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138130: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x138130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x138134: 0x8e4304c8  lw          $v1, 0x4C8($s2)
    ctx->pc = 0x138134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x138138: 0x1062006a  beq         $v1, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x138138u;
    {
        const bool branch_taken_0x138138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138138u;
        // 0x13813c: 0x30b000ff  andi        $s0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138138) {
            ctx->pc = 0x1382E4u;
            goto label_1382e4;
        }
    }
    ctx->pc = 0x138140u;
    // 0x138140: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x138140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x138144: 0xc04b2a2  jal         func_12CA88
    ctx->pc = 0x138144u;
    SET_GPR_U32(ctx, 31, 0x13814Cu);
    ctx->pc = 0x138148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138144u;
    // 0x138148: 0x2484b530  addiu       $a0, $a0, -0x4AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12CA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12CA88u, 0x138144u, 0x13814Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13814Cu;
label_13814c:
    // 0x13814c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13814cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x138154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138158: 0xc04d96e  jal         func_1365B8
    ctx->pc = 0x138158u;
    SET_GPR_U32(ctx, 31, 0x138160u);
    ctx->pc = 0x13815Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138158u;
    // 0x13815c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1365B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1365B8u, 0x138158u, 0x138160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138160u;
label_138160:
    // 0x138160: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x138160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x138164: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x138164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x138168: 0x8e4504c8  lw          $a1, 0x4C8($s2)
    ctx->pc = 0x138168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1224)));
    // 0x13816c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138170: 0x2ca40007  sltiu       $a0, $a1, 0x7
    ctx->pc = 0x138170u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x138174: 0x1080005b  beqz        $a0, . + 4 + (0x5B << 2)
    ctx->pc = 0x138174u;
    {
        const bool branch_taken_0x138174 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x138178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138174u;
        // 0x138178: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138174) {
            ctx->pc = 0x1382E4u;
            goto label_1382e4;
        }
    }
    ctx->pc = 0x13817Cu;
    // 0x13817c: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x13817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x138180: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x138180u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x138184: 0x2442e5c0  addiu       $v0, $v0, -0x1A40
    ctx->pc = 0x138184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960576));
    // 0x138188: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x138188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13818c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x13818cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x138190: 0x800008  jr          $a0
    ctx->pc = 0x138190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x138198u: goto label_138198;
            case 0x1381B0u: goto label_1381b0;
            case 0x13821Cu: goto label_13821c;
            case 0x138268u: goto label_138268;
            case 0x13828Cu: goto label_13828c;
            case 0x1382A4u: goto label_1382a4;
            case 0x1382C8u: goto label_1382c8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138190u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x138198u;
label_138198:
    // 0x138198: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x138198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13819c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13819cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381a0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x1381a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x1381a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1381a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381a8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1381A8u;
    {
        const bool branch_taken_0x1381a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1381ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381A8u;
        // 0x1381ac: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381a8) {
            ctx->pc = 0x1382B8u;
            goto label_1382b8;
        }
    }
    ctx->pc = 0x1381B0u;
label_1381b0:
    // 0x1381b0: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x1381b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x1381b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1381b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1381b8: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1381B8u;
    {
        const bool branch_taken_0x1381b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1381BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381B8u;
        // 0x1381bc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381b8) {
            ctx->pc = 0x1381E0u;
            goto label_1381e0;
        }
    }
    ctx->pc = 0x1381C0u;
    // 0x1381c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1381c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381c4: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x1381c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x1381c8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1381c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381cc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1381ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1381d0: 0xc0495c0  jal         func_125700
    ctx->pc = 0x1381D0u;
    SET_GPR_U32(ctx, 31, 0x1381D8u);
    ctx->pc = 0x1381D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1381D0u;
    // 0x1381d4: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x1381D0u, 0x1381D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1381D8u;
label_1381d8:
    // 0x1381d8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x1381D8u;
    {
        const bool branch_taken_0x1381d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1381DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381D8u;
        // 0x1381dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381d8) {
            ctx->pc = 0x1382E8u;
            goto label_1382e8;
        }
    }
    ctx->pc = 0x1381E0u;
label_1381e0:
    // 0x1381e0: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x1381E0u;
    SET_GPR_U32(ctx, 31, 0x1381E8u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x1381E0u, 0x1381E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1381E8u;
label_1381e8:
    // 0x1381e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1381e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1381ec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1381ECu;
    {
        const bool branch_taken_0x1381ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1381F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381ECu;
        // 0x1381f0: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381ec) {
            ctx->pc = 0x138208u;
            goto label_138208;
        }
    }
    ctx->pc = 0x1381F4u;
    // 0x1381f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1381f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1381f8: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x1381f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x1381fc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1381fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138200: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x138200u;
    {
        const bool branch_taken_0x138200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138200u;
        // 0x138204: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138200) {
            ctx->pc = 0x1382B8u;
            goto label_1382b8;
        }
    }
    ctx->pc = 0x138208u;
label_138208:
    // 0x138208: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13820c: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x13820cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x138210: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x138210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138214: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x138214u;
    {
        const bool branch_taken_0x138214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138214u;
        // 0x138218: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138214) {
            ctx->pc = 0x1382B8u;
            goto label_1382b8;
        }
    }
    ctx->pc = 0x13821Cu;
label_13821c:
    // 0x13821c: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x13821cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
    // 0x138220: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x138220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x138224: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x138224u;
    {
        const bool branch_taken_0x138224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x138228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138224u;
        // 0x138228: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138224) {
            ctx->pc = 0x13826Cu;
            goto label_13826c;
        }
    }
    ctx->pc = 0x13822Cu;
    // 0x13822c: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x13822Cu;
    SET_GPR_U32(ctx, 31, 0x138234u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x13822Cu, 0x138234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138234u;
label_138234:
    // 0x138234: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x138234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x138238: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x138238u;
    {
        const bool branch_taken_0x138238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138238u;
        // 0x13823c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138238) {
            ctx->pc = 0x138254u;
            goto label_138254;
        }
    }
    ctx->pc = 0x138240u;
    // 0x138240: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138244: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x138244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x138248: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x138248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13824c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x13824Cu;
    {
        const bool branch_taken_0x13824c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13824Cu;
        // 0x138250: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13824c) {
            ctx->pc = 0x1382B8u;
            goto label_1382b8;
        }
    }
    ctx->pc = 0x138254u;
label_138254:
    // 0x138254: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138258: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x138258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x13825c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x13825cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138260: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x138260u;
    {
        const bool branch_taken_0x138260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138260u;
        // 0x138264: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138260) {
            ctx->pc = 0x1382B8u;
            goto label_1382b8;
        }
    }
    ctx->pc = 0x138268u;
label_138268:
    // 0x138268: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x138268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_13826c:
    // 0x13826c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13826cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138270: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x138270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x138274: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x138274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138278: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x138278u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13827c: 0xc0495c0  jal         func_125700
    ctx->pc = 0x13827Cu;
    SET_GPR_U32(ctx, 31, 0x138284u);
    ctx->pc = 0x138280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13827Cu;
    // 0x138280: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x13827Cu, 0x138284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138284u;
label_138284:
    // 0x138284: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x138284u;
    {
        const bool branch_taken_0x138284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138284u;
        // 0x138288: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138284) {
            ctx->pc = 0x1382E8u;
            goto label_1382e8;
        }
    }
    ctx->pc = 0x13828Cu;
label_13828c:
    // 0x13828c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13828cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x138290: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x138290u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138294: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x138294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x138298: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x138298u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13829c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13829Cu;
    {
        const bool branch_taken_0x13829c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13829Cu;
        // 0x1382a0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13829c) {
            ctx->pc = 0x1382B8u;
            goto label_1382b8;
        }
    }
    ctx->pc = 0x1382A4u;
label_1382a4:
    // 0x1382a4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1382a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1382a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382ac: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x1382acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x1382b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1382b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382b4: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x1382b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1382b8:
    // 0x1382b8: 0xc0495c0  jal         func_125700
    ctx->pc = 0x1382B8u;
    SET_GPR_U32(ctx, 31, 0x1382C0u);
    ctx->pc = 0x1382BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1382B8u;
    // 0x1382bc: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x1382B8u, 0x1382C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382C0u;
label_1382c0:
    // 0x1382c0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1382C0u;
    {
        const bool branch_taken_0x1382c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382C0u;
        // 0x1382c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382c0) {
            ctx->pc = 0x1382E8u;
            goto label_1382e8;
        }
    }
    ctx->pc = 0x1382C8u;
label_1382c8:
    // 0x1382c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1382c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1382cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1382ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382d0: 0x2484a080  addiu       $a0, $a0, -0x5F80
    ctx->pc = 0x1382d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942848));
    // 0x1382d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1382d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1382d8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1382d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1382dc: 0xc0495c0  jal         func_125700
    ctx->pc = 0x1382DCu;
    SET_GPR_U32(ctx, 31, 0x1382E4u);
    ctx->pc = 0x1382E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1382DCu;
    // 0x1382e0: 0x24080007  addiu       $t0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125700u, 0x1382DCu, 0x1382E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1382E4u;
label_1382e4:
    // 0x1382e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1382e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1382e8:
    // 0x1382e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1382e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1382ec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1382ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1382f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1382f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1382f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1382F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1382F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382F4u;
        // 0x1382f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1382F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1382FCu;
    // 0x1382fc: 0x0  nop
    ctx->pc = 0x1382fcu;
    // NOP
    ctx->pc = 0x138300u;
}
