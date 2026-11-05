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

// Function: sub_002F3560
// Address: 0x2f3560 - 0x2f37b8
void sub_002F3560_0x2f3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3560_0x2f3560");
#endif

    switch (ctx->pc) {
        case 0x2f35d0u: goto label_2f35d0;
        case 0x2f35f0u: goto label_2f35f0;
        case 0x2f3624u: goto label_2f3624;
        case 0x2f3634u: goto label_2f3634;
        case 0x2f3640u: goto label_2f3640;
        case 0x2f3650u: goto label_2f3650;
        case 0x2f3698u: goto label_2f3698;
        case 0x2f36a4u: goto label_2f36a4;
        case 0x2f36b4u: goto label_2f36b4;
        case 0x2f36e8u: goto label_2f36e8;
        default: break;
    }

    ctx->pc = 0x2f3560u;

    // 0x2f3560: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f3560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f3564: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2f3564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2f3568: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2f3568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2f356c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f356cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3570: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2f3570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2f3574: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f3574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3578: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2f3578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2f357c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2f357cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3580: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f3580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f3584: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f3584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3588: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x2f3588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2f358c: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x2f358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x2f3590: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3590u;
    {
        const bool branch_taken_0x2f3590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3590u;
        // 0x2f3594: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3590) {
            ctx->pc = 0x2F35A4u;
            goto label_2f35a4;
        }
    }
    ctx->pc = 0x2F3598u;
    // 0x2f3598: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2f3598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2f359c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2F359Cu;
    {
        const bool branch_taken_0x2f359c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f359c) {
            ctx->pc = 0x2F35A8u;
            goto label_2f35a8;
        }
    }
    ctx->pc = 0x2F35A4u;
label_2f35a4:
    // 0x2f35a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f35a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f35a8:
    // 0x2f35a8: 0x1080004d  beqz        $a0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2F35A8u;
    {
        const bool branch_taken_0x2f35a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f35a8) {
            ctx->pc = 0x2F36E0u;
            goto label_2f36e0;
        }
    }
    ctx->pc = 0x2F35B0u;
    // 0x2f35b0: 0x12400036  beqz        $s2, . + 4 + (0x36 << 2)
    ctx->pc = 0x2F35B0u;
    {
        const bool branch_taken_0x2f35b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F35B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35B0u;
        // 0x2f35b4: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35b0) {
            ctx->pc = 0x2F368Cu;
            goto label_2f368c;
        }
    }
    ctx->pc = 0x2F35B8u;
    // 0x2f35b8: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2f35b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2f35bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f35bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f35c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f35c4: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2f35c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2f35c8: 0xc08dab6  jal         func_236AD8
    ctx->pc = 0x2F35C8u;
    SET_GPR_U32(ctx, 31, 0x2F35D0u);
    ctx->pc = 0x2F35CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35C8u;
    // 0x2f35cc: 0x2c520001  sltiu       $s2, $v0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x236AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236AD8u, 0x2F35C8u, 0x2F35D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35D0u;
label_2f35d0:
    // 0x2f35d0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F35D0u;
    {
        const bool branch_taken_0x2f35d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F35D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35D0u;
        // 0x2f35d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35d0) {
            ctx->pc = 0x2F35F4u;
            goto label_2f35f4;
        }
    }
    ctx->pc = 0x2F35D8u;
    // 0x2f35d8: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F35D8u;
    {
        const bool branch_taken_0x2f35d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F35DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35D8u;
        // 0x2f35dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35d8) {
            ctx->pc = 0x2F35F4u;
            goto label_2f35f4;
        }
    }
    ctx->pc = 0x2F35E0u;
    // 0x2f35e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f35e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f35e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f35e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35e8: 0xc0bce40  jal         func_2F3900
    ctx->pc = 0x2F35E8u;
    SET_GPR_U32(ctx, 31, 0x2F35F0u);
    ctx->pc = 0x2F35ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35E8u;
    // 0x2f35ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3900u, 0x2F35E8u, 0x2F35F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35F0u;
label_2f35f0:
    // 0x2f35f0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x2f35f0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f35f4:
    // 0x2f35f4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F35F4u;
    {
        const bool branch_taken_0x2f35f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35F4u;
        // 0x2f35f8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f35f4) {
            ctx->pc = 0x2F3608u;
            goto label_2f3608;
        }
    }
    ctx->pc = 0x2F35FCu;
    // 0x2f35fc: 0x9043b838  lbu         $v1, -0x47C8($v0)
    ctx->pc = 0x2f35fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294948920)));
    // 0x2f3600: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F3600u;
    {
        const bool branch_taken_0x2f3600 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3600) {
            ctx->pc = 0x2F3604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3600u;
            // 0x2f3604: 0x8e04032c  lw          $a0, 0x32C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3614u;
            goto label_2f3614;
        }
    }
    ctx->pc = 0x2F3608u;
label_2f3608:
    // 0x2f3608: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2F3608u;
    {
        const bool branch_taken_0x2f3608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3608u;
        // 0x2f360c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3608) {
            ctx->pc = 0x2F3690u;
            goto label_2f3690;
        }
    }
    ctx->pc = 0x2F3610u;
    // 0x2f3610: 0x8e04032c  lw          $a0, 0x32C($s0)
    ctx->pc = 0x2f3610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 812)));
label_2f3614:
    // 0x2f3614: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3614u;
    {
        const bool branch_taken_0x2f3614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3614) {
            ctx->pc = 0x2F3618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3614u;
            // 0x2f3618: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F362Cu;
            goto label_2f362c;
        }
    }
    ctx->pc = 0x2F361Cu;
    // 0x2f361c: 0xc09663a  jal         func_2598E8
    ctx->pc = 0x2F361Cu;
    SET_GPR_U32(ctx, 31, 0x2F3624u);
    ctx->pc = 0x2F3620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F361Cu;
    // 0x2f3620: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2598E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2598E8u, 0x2F361Cu, 0x2F3624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3624u;
label_2f3624:
    // 0x2f3624: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2F3624u;
    {
        const bool branch_taken_0x2f3624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3624u;
        // 0x2f3628: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3624) {
            ctx->pc = 0x2F379Cu;
            goto label_2f379c;
        }
    }
    ctx->pc = 0x2F362Cu;
label_2f362c:
    // 0x2f362c: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2F362Cu;
    SET_GPR_U32(ctx, 31, 0x2F3634u);
    ctx->pc = 0x2F3630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F362Cu;
    // 0x2f3630: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2F362Cu, 0x2F3634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3634u;
label_2f3634:
    // 0x2f3634: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3638: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2F3638u;
    SET_GPR_U32(ctx, 31, 0x2F3640u);
    ctx->pc = 0x2F363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3638u;
    // 0x2f363c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F3638u, 0x2F3640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3640u;
label_2f3640:
    // 0x2f3640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F3640u;
    {
        const bool branch_taken_0x2f3640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3640) {
            ctx->pc = 0x2F3650u;
            goto label_2f3650;
        }
    }
    ctx->pc = 0x2F3648u;
    // 0x2f3648: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2F3648u;
    SET_GPR_U32(ctx, 31, 0x2F3650u);
    ctx->pc = 0x2F364Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3648u;
    // 0x2f364c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F3648u, 0x2F3650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3650u;
label_2f3650:
    // 0x2f3650: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f3650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f3654: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f3654u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f3658: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3658u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f365c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2f365cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f3660: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2f3660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2f3664: 0x260300b0  addiu       $v1, $s0, 0xB0
    ctx->pc = 0x2f3664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2f3668: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2f3668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f366c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f366cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2f3670: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2f3670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2f3674: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2f3674u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f3678: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2f3678u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f367c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f367cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f3680: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f3680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3684: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x2F3684u;
    {
        const bool branch_taken_0x2f3684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3684u;
        // 0x2f3688: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3684) {
            ctx->pc = 0x2F3774u;
            goto label_2f3774;
        }
    }
    ctx->pc = 0x2F368Cu;
label_2f368c:
    // 0x2f368c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f368cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3690:
    // 0x2f3690: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x2F3690u;
    SET_GPR_U32(ctx, 31, 0x2F3698u);
    ctx->pc = 0x2F3694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3690u;
    // 0x2f3694: 0x24050448  addiu       $a1, $zero, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x2F3690u, 0x2F3698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3698u;
label_2f3698:
    // 0x2f3698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f369c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x2F369Cu;
    SET_GPR_U32(ctx, 31, 0x2F36A4u);
    ctx->pc = 0x2F36A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F369Cu;
    // 0x2f36a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x2F369Cu, 0x2F36A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36A4u;
label_2f36a4:
    // 0x2f36a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F36A4u;
    {
        const bool branch_taken_0x2f36a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36A4u;
        // 0x2f36a8: 0x260200b0  addiu       $v0, $s0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36a4) {
            ctx->pc = 0x2F36B8u;
            goto label_2f36b8;
        }
    }
    ctx->pc = 0x2F36ACu;
    // 0x2f36ac: 0xc0c4900  jal         func_312400
    ctx->pc = 0x2F36ACu;
    SET_GPR_U32(ctx, 31, 0x2F36B4u);
    ctx->pc = 0x2F36B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36ACu;
    // 0x2f36b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2F36ACu, 0x2F36B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36B4u;
label_2f36b4:
    // 0x2f36b4: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x2f36b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
label_2f36b8:
    // 0x2f36b8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f36b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f36bc: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f36bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f36c0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x2f36c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f36c4: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f36c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2f36c8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f36c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2f36cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f36ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f36d0: 0x0  nop
    ctx->pc = 0x2f36d0u;
    // NOP
    // 0x2f36d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f36d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f36d8: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2F36D8u;
    {
        const bool branch_taken_0x2f36d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F36DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F36D8u;
        // 0x2f36dc: 0xe6200004  swc1        $f0, 0x4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f36d8) {
            ctx->pc = 0x2F3798u;
            goto label_2f3798;
        }
    }
    ctx->pc = 0x2F36E0u;
label_2f36e0:
    // 0x2f36e0: 0xc06b600  jal         func_1AD800
    ctx->pc = 0x2F36E0u;
    SET_GPR_U32(ctx, 31, 0x2F36E8u);
    ctx->pc = 0x2F36E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F36E0u;
    // 0x2f36e4: 0x8e040334  lw          $a0, 0x334($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD800u, 0x2F36E0u, 0x2F36E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F36E8u;
label_2f36e8:
    // 0x2f36e8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F36E8u;
    {
        const bool branch_taken_0x2f36e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f36e8) {
            ctx->pc = 0x2F370Cu;
            goto label_2f370c;
        }
    }
    ctx->pc = 0x2F36F0u;
    // 0x2f36f0: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2f36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x2f36f4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f36f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f36f8: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f36f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f36fc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f36fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3700: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f3700u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3704: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2F3704u;
    {
        const bool branch_taken_0x2f3704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3704u;
        // 0x2f3708: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3704) {
            ctx->pc = 0x2F379Cu;
            goto label_2f379c;
        }
    }
    ctx->pc = 0x2F370Cu;
label_2f370c:
    // 0x2f370c: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x2F370Cu;
    {
        const bool branch_taken_0x2f370c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F370Cu;
        // 0x2f3710: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f370c) {
            ctx->pc = 0x2F3738u;
            goto label_2f3738;
        }
    }
    ctx->pc = 0x2F3714u;
    // 0x2f3714: 0x8e02036c  lw          $v0, 0x36C($s0)
    ctx->pc = 0x2f3714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 876)));
    // 0x2f3718: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f3718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2f371c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F371Cu;
    {
        const bool branch_taken_0x2f371c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F3720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F371Cu;
        // 0x2f3720: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f371c) {
            ctx->pc = 0x2F373Cu;
            goto label_2f373c;
        }
    }
    ctx->pc = 0x2F3724u;
    // 0x2f3724: 0x3c013ff3  lui         $at, 0x3FF3
    ctx->pc = 0x2f3724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16371 << 16));
    // 0x2f3728: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x2f3728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x2f372c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f372cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f3730: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F3730u;
    {
        const bool branch_taken_0x2f3730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3730u;
        // 0x2f3734: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3730) {
            ctx->pc = 0x2F3748u;
            goto label_2f3748;
        }
    }
    ctx->pc = 0x2F3738u;
label_2f3738:
    // 0x2f3738: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x2f3738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_2f373c:
    // 0x2f373c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2f373cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f3740: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x2f3740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x2f3744: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f3744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f3748:
    // 0x2f3748: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f3748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f374c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2f374cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x2f3750: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2f3750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2f3754: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x2f3754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x2f3758: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2f3758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x2f375c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2f375cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2f3760: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2f3760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3764: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x2f3764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2f3768: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2f3768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2f376c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2f376cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2f3770: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2f3770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f3774:
    // 0x2f3774: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2f3774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f3778: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x2f3778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f377c: 0xc7a3002c  lwc1        $f3, 0x2C($sp)
    ctx->pc = 0x2f377cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2f3780: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2f3780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2f3784: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2f3784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2f3788: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2f3788u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2f378c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2f378cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2f3790: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2f3790u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3794: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2f3794u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2f3798:
    // 0x2f3798: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2f3798u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f379c:
    // 0x2f379c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2f379cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f37a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2f37a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f37a4: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2f37a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2f37a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f37a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f37ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2F37ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F37B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F37ACu;
        // 0x2f37b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F37ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F37B4u;
    // 0x2f37b4: 0x0  nop
    ctx->pc = 0x2f37b4u;
    // NOP
    ctx->pc = 0x2f37b8u;
}
