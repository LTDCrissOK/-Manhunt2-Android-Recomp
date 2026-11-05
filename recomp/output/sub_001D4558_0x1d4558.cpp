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

// Function: sub_001D4558
// Address: 0x1d4558 - 0x1d46e0
void sub_001D4558_0x1d4558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4558_0x1d4558");
#endif

    switch (ctx->pc) {
        case 0x1d45a8u: goto label_1d45a8;
        case 0x1d45b4u: goto label_1d45b4;
        case 0x1d45ccu: goto label_1d45cc;
        case 0x1d45f0u: goto label_1d45f0;
        case 0x1d4608u: goto label_1d4608;
        case 0x1d4634u: goto label_1d4634;
        case 0x1d4650u: goto label_1d4650;
        case 0x1d4668u: goto label_1d4668;
        case 0x1d4694u: goto label_1d4694;
        case 0x1d46a8u: goto label_1d46a8;
        case 0x1d46b8u: goto label_1d46b8;
        default: break;
    }

    ctx->pc = 0x1d4558u;

    // 0x1d4558: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1d4558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1d455c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d455cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d4560: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d4560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d4564: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d4564u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4568: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d4568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d456c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d456cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4570: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d4570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d4574: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1d4574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1d4578: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1d4578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1d457c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d457cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d4580: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1d4580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d4584: 0x10a00011  beqz        $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D4584u;
    {
        const bool branch_taken_0x1d4584 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4584u;
        // 0x1d4588: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4584) {
            ctx->pc = 0x1D45CCu;
            goto label_1d45cc;
        }
    }
    ctx->pc = 0x1D458Cu;
    // 0x1d458c: 0x8ca3fff0  lw          $v1, -0x10($a1)
    ctx->pc = 0x1d458cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967280)));
    // 0x1d4590: 0x622018  mult        $a0, $v1, $v0
    ctx->pc = 0x1d4590u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1d4594: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1d4594u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1d4598: 0x50b0000a  beql        $a1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4598u;
    {
        const bool branch_taken_0x1d4598 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d4598) {
            ctx->pc = 0x1D459Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4598u;
            // 0x1d459c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D45C4u;
            goto label_1d45c4;
        }
    }
    ctx->pc = 0x1D45A0u;
    // 0x1d45a0: 0x2610ffcc  addiu       $s0, $s0, -0x34
    ctx->pc = 0x1d45a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967244));
    // 0x1d45a4: 0x0  nop
    ctx->pc = 0x1d45a4u;
    // NOP
label_1d45a8:
    // 0x1d45a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d45a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45ac: 0xc07477a  jal         func_1D1DE8
    ctx->pc = 0x1D45ACu;
    SET_GPR_U32(ctx, 31, 0x1D45B4u);
    ctx->pc = 0x1D45B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D45ACu;
    // 0x1d45b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1DE8u, 0x1D45ACu, 0x1D45B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D45B4u;
label_1d45b4:
    // 0x1d45b4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d45b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d45b8: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D45B8u;
    {
        const bool branch_taken_0x1d45b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d45b8) {
            ctx->pc = 0x1D45BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D45B8u;
            // 0x1d45bc: 0x2610ffcc  addiu       $s0, $s0, -0x34 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967244));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D45A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d45a8;
        }
    }
    ctx->pc = 0x1D45C0u;
    // 0x1d45c0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x1d45c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d45c4:
    // 0x1d45c4: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1D45C4u;
    SET_GPR_U32(ctx, 31, 0x1D45CCu);
    ctx->pc = 0x1D45C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D45C4u;
    // 0x1d45c8: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1D45C4u, 0x1D45CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D45CCu;
label_1d45cc:
    // 0x1d45cc: 0x26320418  addiu       $s2, $s1, 0x418
    ctx->pc = 0x1d45ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1048));
    // 0x1d45d0: 0x32750001  andi        $s5, $s3, 0x1
    ctx->pc = 0x1d45d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x1d45d4: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1d45d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d45d8: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x1D45D8u;
    {
        const bool branch_taken_0x1d45d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D45DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D45D8u;
        // 0x1d45dc: 0x26330018  addiu       $s3, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d45d8) {
            ctx->pc = 0x1D463Cu;
            goto label_1d463c;
        }
    }
    ctx->pc = 0x1D45E0u;
    // 0x1d45e0: 0x26300818  addiu       $s0, $s1, 0x818
    ctx->pc = 0x1d45e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2072));
    // 0x1d45e4: 0x12500015  beq         $s2, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D45E4u;
    {
        const bool branch_taken_0x1d45e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        if (branch_taken_0x1d45e4) {
            ctx->pc = 0x1D463Cu;
            goto label_1d463c;
        }
    }
    ctx->pc = 0x1D45ECu;
    // 0x1d45ec: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d45ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_1d45f0:
    // 0x1d45f0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d45f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d45f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d45f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d45f8: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D45F8u;
    {
        const bool branch_taken_0x1d45f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d45f8) {
            ctx->pc = 0x1D45FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D45F8u;
            // 0x1d45fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4624u;
            goto label_1d4624;
        }
    }
    ctx->pc = 0x1D4600u;
    // 0x1d4600: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d4600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d4604: 0x0  nop
    ctx->pc = 0x1d4604u;
    // NOP
label_1d4608:
    // 0x1d4608: 0x0  nop
    ctx->pc = 0x1d4608u;
    // NOP
    // 0x1d460c: 0x0  nop
    ctx->pc = 0x1d460cu;
    // NOP
    // 0x1d4610: 0x0  nop
    ctx->pc = 0x1d4610u;
    // NOP
    // 0x1d4614: 0x0  nop
    ctx->pc = 0x1d4614u;
    // NOP
    // 0x1d4618: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4618u;
    {
        const bool branch_taken_0x1d4618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4618) {
            ctx->pc = 0x1D461Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4618u;
            // 0x1d461c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4608;
        }
    }
    ctx->pc = 0x1D4620u;
    // 0x1d4620: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d4620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4624:
    // 0x1d4624: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4624u;
    {
        const bool branch_taken_0x1d4624 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4624) {
            ctx->pc = 0x1D4634u;
            goto label_1d4634;
        }
    }
    ctx->pc = 0x1D462Cu;
    // 0x1d462c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D462Cu;
    SET_GPR_U32(ctx, 31, 0x1D4634u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D462Cu, 0x1D4634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4634u;
label_1d4634:
    // 0x1d4634: 0x5690ffee  bnel        $s4, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D4634u;
    {
        const bool branch_taken_0x1d4634 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 16));
        if (branch_taken_0x1d4634) {
            ctx->pc = 0x1D4638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4634u;
            // 0x1d4638: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D45F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d45f0;
        }
    }
    ctx->pc = 0x1D463Cu;
label_1d463c:
    // 0x1d463c: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x1D463Cu;
    {
        const bool branch_taken_0x1d463c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D463Cu;
        // 0x1d4640: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d463c) {
            ctx->pc = 0x1D469Cu;
            goto label_1d469c;
        }
    }
    ctx->pc = 0x1D4644u;
    // 0x1d4644: 0x12700016  beq         $s3, $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1D4644u;
    {
        const bool branch_taken_0x1d4644 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x1D4648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4644u;
        // 0x1d4648: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4644) {
            ctx->pc = 0x1D46A0u;
            goto label_1d46a0;
        }
    }
    ctx->pc = 0x1D464Cu;
    // 0x1d464c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1d464cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_1d4650:
    // 0x1d4650: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1d4650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1d4654: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d4654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d4658: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1D4658u;
    {
        const bool branch_taken_0x1d4658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d4658) {
            ctx->pc = 0x1D465Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4658u;
            // 0x1d465c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4684u;
            goto label_1d4684;
        }
    }
    ctx->pc = 0x1D4660u;
    // 0x1d4660: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1d4660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1d4664: 0x0  nop
    ctx->pc = 0x1d4664u;
    // NOP
label_1d4668:
    // 0x1d4668: 0x0  nop
    ctx->pc = 0x1d4668u;
    // NOP
    // 0x1d466c: 0x0  nop
    ctx->pc = 0x1d466cu;
    // NOP
    // 0x1d4670: 0x0  nop
    ctx->pc = 0x1d4670u;
    // NOP
    // 0x1d4674: 0x0  nop
    ctx->pc = 0x1d4674u;
    // NOP
    // 0x1d4678: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1D4678u;
    {
        const bool branch_taken_0x1d4678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d4678) {
            ctx->pc = 0x1D467Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4678u;
            // 0x1d467c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D4668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4668;
        }
    }
    ctx->pc = 0x1D4680u;
    // 0x1d4680: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d4680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d4684:
    // 0x1d4684: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4684u;
    {
        const bool branch_taken_0x1d4684 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d4684) {
            ctx->pc = 0x1D4694u;
            goto label_1d4694;
        }
    }
    ctx->pc = 0x1D468Cu;
    // 0x1d468c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D468Cu;
    SET_GPR_U32(ctx, 31, 0x1D4694u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D468Cu, 0x1D4694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D4694u;
label_1d4694:
    // 0x1d4694: 0x1670ffee  bne         $s3, $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1D4694u;
    {
        const bool branch_taken_0x1d4694 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x1D4698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4694u;
        // 0x1d4698: 0x2610fff0  addiu       $s0, $s0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4694) {
            ctx->pc = 0x1D4650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4650;
        }
    }
    ctx->pc = 0x1D469Cu;
label_1d469c:
    // 0x1d469c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d469cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d46a0:
    // 0x1d46a0: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x1D46A0u;
    SET_GPR_U32(ctx, 31, 0x1D46A8u);
    ctx->pc = 0x1D46A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46A0u;
    // 0x1d46a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x1D46A0u, 0x1D46A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46A8u;
label_1d46a8:
    // 0x1d46a8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D46A8u;
    {
        const bool branch_taken_0x1d46a8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D46ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46A8u;
        // 0x1d46ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d46a8) {
            ctx->pc = 0x1D46BCu;
            goto label_1d46bc;
        }
    }
    ctx->pc = 0x1D46B0u;
    // 0x1d46b0: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x1D46B0u;
    SET_GPR_U32(ctx, 31, 0x1D46B8u);
    ctx->pc = 0x1D46B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D46B0u;
    // 0x1d46b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1D46B0u, 0x1D46B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D46B8u;
label_1d46b8:
    // 0x1d46b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d46b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d46bc:
    // 0x1d46bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d46bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d46c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d46c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d46c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d46c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d46c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1d46c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d46cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1d46ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1d46d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d46d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d46d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D46D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D46D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D46D4u;
        // 0x1d46d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D46D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D46DCu;
    // 0x1d46dc: 0x0  nop
    ctx->pc = 0x1d46dcu;
    // NOP
    ctx->pc = 0x1d46e0u;
}
