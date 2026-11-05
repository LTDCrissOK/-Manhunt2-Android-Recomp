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

// Function: sub_002D02B8
// Address: 0x2d02b8 - 0x2d03e8
void sub_002D02B8_0x2d02b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D02B8_0x2d02b8");
#endif

    switch (ctx->pc) {
        case 0x2d032cu: goto label_2d032c;
        case 0x2d033cu: goto label_2d033c;
        case 0x2d0350u: goto label_2d0350;
        case 0x2d0370u: goto label_2d0370;
        case 0x2d0380u: goto label_2d0380;
        case 0x2d0394u: goto label_2d0394;
        case 0x2d03a8u: goto label_2d03a8;
        case 0x2d03b8u: goto label_2d03b8;
        default: break;
    }

    ctx->pc = 0x2d02b8u;

    // 0x2d02b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d02b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d02bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d02bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d02c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d02c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d02c4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d02c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02c8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d02c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2d02cc: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x2d02ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02d0: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2d02d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02d4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d02d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d02d8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d02d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d02dc: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2d02dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2d02e0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d02e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2d02e4: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x2d02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
    // 0x2d02e8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d02e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2d02ec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d02ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d02f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d02f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2d02f4: 0xe2382a  slt         $a3, $a3, $v0
    ctx->pc = 0x2d02f4u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d02f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2d02f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2d02fc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2d02fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0300: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d0300u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0304: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2d0304u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0308: 0x14e0002c  bnez        $a3, . + 4 + (0x2C << 2)
    ctx->pc = 0x2D0308u;
    {
        const bool branch_taken_0x2d0308 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0308u;
        // 0x2d030c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0308) {
            ctx->pc = 0x2D03BCu;
            goto label_2d03bc;
        }
    }
    ctx->pc = 0x2D0310u;
    // 0x2d0310: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x2d0310u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2d0314: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2D0314u;
    {
        const bool branch_taken_0x2d0314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0314u;
        // 0x2d0318: 0x211a023  subu        $s4, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0314) {
            ctx->pc = 0x2D0358u;
            goto label_2d0358;
        }
    }
    ctx->pc = 0x2D031Cu;
    // 0x2d031c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d031cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0320: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d0320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0324: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D0324u;
    SET_GPR_U32(ctx, 31, 0x2D032Cu);
    ctx->pc = 0x2D0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0324u;
    // 0x2d0328: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D0324u, 0x2D032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D032Cu;
label_2d032c:
    // 0x2d032c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d032cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0330: 0x2502821  addu        $a1, $s2, $s0
    ctx->pc = 0x2d0330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2d0334: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D0334u;
    SET_GPR_U32(ctx, 31, 0x2D033Cu);
    ctx->pc = 0x2D0338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0334u;
    // 0x2d0338: 0x2303023  subu        $a2, $s1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D0334u, 0x2D033Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D033Cu;
label_2d033c:
    // 0x2d033c: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x2d033cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2d0340: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d0340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0344: 0x902023  subu        $a0, $a0, $s0
    ctx->pc = 0x2d0344u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2d0348: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D0348u;
    SET_GPR_U32(ctx, 31, 0x2D0350u);
    ctx->pc = 0x2D034Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0348u;
    // 0x2d034c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D0348u, 0x2D0350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0350u;
label_2d0350:
    // 0x2d0350: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2D0350u;
    {
        const bool branch_taken_0x2d0350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0350u;
        // 0x2d0354: 0x2371021  addu        $v0, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0350) {
            ctx->pc = 0x2D03BCu;
            goto label_2d03bc;
        }
    }
    ctx->pc = 0x2D0358u;
label_2d0358:
    // 0x2d0358: 0x2f4102a  slt         $v0, $s7, $s4
    ctx->pc = 0x2d0358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x2d035c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D035Cu;
    {
        const bool branch_taken_0x2d035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D035Cu;
        // 0x2d0360: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d035c) {
            ctx->pc = 0x2D039Cu;
            goto label_2d039c;
        }
    }
    ctx->pc = 0x2D0364u;
    // 0x2d0364: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d0364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0368: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D0368u;
    SET_GPR_U32(ctx, 31, 0x2D0370u);
    ctx->pc = 0x2D036Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0368u;
    // 0x2d036c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D0368u, 0x2D0370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0370u;
label_2d0370:
    // 0x2d0370: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d0370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0374: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x2d0374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2d0378: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D0378u;
    SET_GPR_U32(ctx, 31, 0x2D0380u);
    ctx->pc = 0x2D037Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0378u;
    // 0x2d037c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D0378u, 0x2D0380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0380u;
label_2d0380:
    // 0x2d0380: 0x2b02821  addu        $a1, $s5, $s0
    ctx->pc = 0x2d0380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2d0384: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2d0384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0388: 0xb12823  subu        $a1, $a1, $s1
    ctx->pc = 0x2d0388u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x2d038c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D038Cu;
    SET_GPR_U32(ctx, 31, 0x2D0394u);
    ctx->pc = 0x2D0390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D038Cu;
    // 0x2d0390: 0x2f43023  subu        $a2, $s7, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D038Cu, 0x2D0394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0394u;
label_2d0394:
    // 0x2d0394: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2D0394u;
    {
        const bool branch_taken_0x2d0394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0394u;
        // 0x2d0398: 0x2371021  addu        $v0, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0394) {
            ctx->pc = 0x2D03BCu;
            goto label_2d03bc;
        }
    }
    ctx->pc = 0x2D039Cu;
label_2d039c:
    // 0x2d039c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03a0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D03A0u;
    SET_GPR_U32(ctx, 31, 0x2D03A8u);
    ctx->pc = 0x2D03A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03A0u;
    // 0x2d03a4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D03A0u, 0x2D03A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03A8u;
label_2d03a8:
    // 0x2d03a8: 0x2712021  addu        $a0, $s3, $s1
    ctx->pc = 0x2d03a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2d03ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d03acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d03b0: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x2D03B0u;
    SET_GPR_U32(ctx, 31, 0x2D03B8u);
    ctx->pc = 0x2D03B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D03B0u;
    // 0x2d03b4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x2D03B0u, 0x2D03B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D03B8u;
label_2d03b8:
    // 0x2d03b8: 0x2371021  addu        $v0, $s1, $s7
    ctx->pc = 0x2d03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
label_2d03bc:
    // 0x2d03bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d03bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d03c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d03c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d03c4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d03c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d03c8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d03c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d03cc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d03ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d03d0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d03d0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d03d4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d03d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d03d8: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d03d8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d03dc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d03dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d03e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D03E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D03E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D03E0u;
        // 0x2d03e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D03E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D03E8u;
}
