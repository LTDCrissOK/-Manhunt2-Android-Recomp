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

// Function: sub_0019A600
// Address: 0x19a600 - 0x19a870
void sub_0019A600_0x19a600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A600_0x19a600");
#endif

    switch (ctx->pc) {
        case 0x19a66cu: goto label_19a66c;
        case 0x19a680u: goto label_19a680;
        case 0x19a6a4u: goto label_19a6a4;
        case 0x19a6b4u: goto label_19a6b4;
        case 0x19a6c0u: goto label_19a6c0;
        case 0x19a6c8u: goto label_19a6c8;
        case 0x19a6d8u: goto label_19a6d8;
        case 0x19a74cu: goto label_19a74c;
        case 0x19a7fcu: goto label_19a7fc;
        case 0x19a824u: goto label_19a824;
        case 0x19a834u: goto label_19a834;
        case 0x19a85cu: goto label_19a85c;
        default: break;
    }

    ctx->pc = 0x19a600u;

    // 0x19a600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19a600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19a604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19a608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19a60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a610: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19a610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19a614: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x19a614u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19a618: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x19a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x19a61c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19a61cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19a620: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A620u;
    {
        const bool branch_taken_0x19a620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A620u;
        // 0x19a624: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a620) {
            ctx->pc = 0x19A63Cu;
            goto label_19a63c;
        }
    }
    ctx->pc = 0x19A628u;
    // 0x19a628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19a628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a62c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A62Cu;
    {
        const bool branch_taken_0x19a62c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19a62c) {
            ctx->pc = 0x19A630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A62Cu;
            // 0x19a630: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A640u;
            goto label_19a640;
        }
    }
    ctx->pc = 0x19A634u;
    // 0x19a634: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A634u;
    {
        const bool branch_taken_0x19a634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a634) {
            ctx->pc = 0x19A640u;
            goto label_19a640;
        }
    }
    ctx->pc = 0x19A63Cu;
label_19a63c:
    // 0x19a63c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19a640:
    // 0x19a640: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19A640u;
    {
        const bool branch_taken_0x19a640 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a640) {
            ctx->pc = 0x19A664u;
            goto label_19a664;
        }
    }
    ctx->pc = 0x19A648u;
    // 0x19a648: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19a648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a64c: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    // 0x19a650: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x19a650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x19a654: 0x2463ffcf  addiu       $v1, $v1, -0x31
    ctx->pc = 0x19a654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x19a658: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x19a658u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x19a65c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A65Cu;
    {
        const bool branch_taken_0x19a65c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a65c) {
            ctx->pc = 0x19A678u;
            goto label_19a678;
        }
    }
    ctx->pc = 0x19A664u;
label_19a664:
    // 0x19a664: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19A664u;
    SET_GPR_U32(ctx, 31, 0x19A66Cu);
    ctx->pc = 0x19A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A664u;
    // 0x19a668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A664u, 0x19A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A66Cu;
label_19a66c:
    // 0x19a66c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a670: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A670u;
    {
        const bool branch_taken_0x19a670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A670u;
        // 0x19a674: 0xac430220  sw          $v1, 0x220($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a670) {
            ctx->pc = 0x19A684u;
            goto label_19a684;
        }
    }
    ctx->pc = 0x19A678u;
label_19a678:
    // 0x19a678: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19A678u;
    SET_GPR_U32(ctx, 31, 0x19A680u);
    ctx->pc = 0x19A67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A678u;
    // 0x19a67c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A678u, 0x19A680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A680u;
label_19a680:
    // 0x19a680: 0xac400220  sw          $zero, 0x220($v0)
    ctx->pc = 0x19a680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 0));
label_19a684:
    // 0x19a684: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x19a684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x19a688: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19a688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x19a68c: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x19a68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x19a690: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x19A690u;
    {
        const bool branch_taken_0x19a690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A690u;
        // 0x19a694: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a690) {
            ctx->pc = 0x19A7F4u;
            goto label_19a7f4;
        }
    }
    ctx->pc = 0x19A698u;
    // 0x19a698: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19a698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a69c: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x19A69Cu;
    SET_GPR_U32(ctx, 31, 0x19A6A4u);
    ctx->pc = 0x19A6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A69Cu;
    // 0x19a6a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x19A69Cu, 0x19A6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6A4u;
label_19a6a4:
    // 0x19a6a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x19a6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19a6a8: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x19a6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x19a6ac: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x19A6ACu;
    SET_GPR_U32(ctx, 31, 0x19A6B4u);
    ctx->pc = 0x19A6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6ACu;
    // 0x19a6b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x19A6ACu, 0x19A6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6B4u;
label_19a6b4:
    // 0x19a6b4: 0x7e0000d0  sq          $zero, 0xD0($s0)
    ctx->pc = 0x19a6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 208), GPR_VEC(ctx, 0));
    // 0x19a6b8: 0xc061a1e  jal         func_186878
    ctx->pc = 0x19A6B8u;
    SET_GPR_U32(ctx, 31, 0x19A6C0u);
    ctx->pc = 0x19A6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6B8u;
    // 0x19a6bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19A6B8u, 0x19A6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6C0u;
label_19a6c0:
    // 0x19a6c0: 0xc06e0e6  jal         func_1B8398
    ctx->pc = 0x19A6C0u;
    SET_GPR_U32(ctx, 31, 0x19A6C8u);
    ctx->pc = 0x19A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6C0u;
    // 0x19a6c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8398u, 0x19A6C0u, 0x19A6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6C8u;
label_19a6c8:
    // 0x19a6c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A6C8u;
    {
        const bool branch_taken_0x19a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6c8) {
            ctx->pc = 0x19A744u;
            goto label_19a744;
        }
    }
    ctx->pc = 0x19A6D0u;
    // 0x19a6d0: 0xc067258  jal         func_19C960
    ctx->pc = 0x19A6D0u;
    SET_GPR_U32(ctx, 31, 0x19A6D8u);
    ctx->pc = 0x19A6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A6D0u;
    // 0x19a6d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C960u, 0x19A6D0u, 0x19A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6D8u;
label_19a6d8:
    // 0x19a6d8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19a6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19a6dc: 0x8c442b00  lw          $a0, 0x2B00($v0)
    ctx->pc = 0x19a6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x19a6e0: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A6E0u;
    {
        const bool branch_taken_0x19a6e0 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19A6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A6E0u;
        // 0x19a6e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a6e0) {
            ctx->pc = 0x19A6FCu;
            goto label_19a6fc;
        }
    }
    ctx->pc = 0x19A6E8u;
    // 0x19a6e8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19a6e8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a6ec: 0x0  nop
    ctx->pc = 0x19a6ecu;
    // NOP
    // 0x19a6f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a6f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a6f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19A6F4u;
    {
        const bool branch_taken_0x19a6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a6f4) {
            ctx->pc = 0x19A718u;
            goto label_19a718;
        }
    }
    ctx->pc = 0x19A6FCu;
label_19a6fc:
    // 0x19a6fc: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x19a700: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x19a700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x19a704: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19a708: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a70c: 0x0  nop
    ctx->pc = 0x19a70cu;
    // NOP
    // 0x19a710: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a714: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19a714u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19a718:
    // 0x19a718: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19a718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19a71c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19a71cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19a720: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a720u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a724: 0x0  nop
    ctx->pc = 0x19a724u;
    // NOP
    // 0x19a728: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a728u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a72c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x19a72cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x19a730: 0x8ca22b00  lw          $v0, 0x2B00($a1)
    ctx->pc = 0x19a730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
    // 0x19a734: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A734u;
    {
        const bool branch_taken_0x19a734 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x19A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A734u;
        // 0x19a738: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a734) {
            ctx->pc = 0x19A7B0u;
            goto label_19a7b0;
        }
    }
    ctx->pc = 0x19A73Cu;
    // 0x19a73c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19A73Cu;
    {
        const bool branch_taken_0x19a73c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A73Cu;
        // 0x19a740: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a73c) {
            ctx->pc = 0x19A7C8u;
            goto label_19a7c8;
        }
    }
    ctx->pc = 0x19A744u;
label_19a744:
    // 0x19a744: 0xc067598  jal         func_19D660
    ctx->pc = 0x19A744u;
    SET_GPR_U32(ctx, 31, 0x19A74Cu);
    ctx->pc = 0x19A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A744u;
    // 0x19a748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D660u, 0x19A744u, 0x19A74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A74Cu;
label_19a74c:
    // 0x19a74c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19a74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x19a750: 0x8c442b00  lw          $a0, 0x2B00($v0)
    ctx->pc = 0x19a750u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B00u));
    // 0x19a754: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A754u;
    {
        const bool branch_taken_0x19a754 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x19A758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A754u;
        // 0x19a758: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a754) {
            ctx->pc = 0x19A770u;
            goto label_19a770;
        }
    }
    ctx->pc = 0x19A75Cu;
    // 0x19a75c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x19a75cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a760: 0x0  nop
    ctx->pc = 0x19a760u;
    // NOP
    // 0x19a764: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a764u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a768: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19A768u;
    {
        const bool branch_taken_0x19a768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a768) {
            ctx->pc = 0x19A78Cu;
            goto label_19a78c;
        }
    }
    ctx->pc = 0x19A770u;
label_19a770:
    // 0x19a770: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x19a770u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x19a774: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x19a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x19a778: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19a77c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a77cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a780: 0x0  nop
    ctx->pc = 0x19a780u;
    // NOP
    // 0x19a784: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a784u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a788: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19a788u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19a78c:
    // 0x19a78c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19a78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19a790: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19a790u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19a794: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a794u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a798: 0x0  nop
    ctx->pc = 0x19a798u;
    // NOP
    // 0x19a79c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a79cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a7a0: 0xe6000084  swc1        $f0, 0x84($s0)
    ctx->pc = 0x19a7a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x19a7a4: 0x8ca22b00  lw          $v0, 0x2B00($a1)
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11008)));
    // 0x19a7a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A7A8u;
    {
        const bool branch_taken_0x19a7a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19A7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A7A8u;
        // 0x19a7ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a7a8) {
            ctx->pc = 0x19A7C4u;
            goto label_19a7c4;
        }
    }
    ctx->pc = 0x19A7B0u;
label_19a7b0:
    // 0x19a7b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a7b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a7b4: 0x0  nop
    ctx->pc = 0x19a7b4u;
    // NOP
    // 0x19a7b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a7bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x19A7BCu;
    {
        const bool branch_taken_0x19a7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a7bc) {
            ctx->pc = 0x19A7DCu;
            goto label_19a7dc;
        }
    }
    ctx->pc = 0x19A7C4u;
label_19a7c4:
    // 0x19a7c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19a7c8:
    // 0x19a7c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x19a7cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19a7ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x19a7d0: 0x0  nop
    ctx->pc = 0x19a7d0u;
    // NOP
    // 0x19a7d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19a7d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x19a7d8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19a7d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19a7dc:
    // 0x19a7dc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19a7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x19a7e0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19a7e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x19a7e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a7e8: 0x0  nop
    ctx->pc = 0x19a7e8u;
    // NOP
    // 0x19a7ec: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19a7ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x19a7f0: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x19a7f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_19a7f4:
    // 0x19a7f4: 0xc061a26  jal         func_186898
    ctx->pc = 0x19A7F4u;
    SET_GPR_U32(ctx, 31, 0x19A7FCu);
    ctx->pc = 0x19A7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7F4u;
    // 0x19a7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19A7F4u, 0x19A7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A7FCu;
label_19a7fc:
    // 0x19a7fc: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x19a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a800: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x19a804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a808: 0x0  nop
    ctx->pc = 0x19a808u;
    // NOP
    // 0x19a80c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19a80cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a810: 0x0  nop
    ctx->pc = 0x19a810u;
    // NOP
    // 0x19a814: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19A814u;
    {
        const bool branch_taken_0x19a814 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a814) {
            ctx->pc = 0x19A82Cu;
            goto label_19a82c;
        }
    }
    ctx->pc = 0x19A81Cu;
    // 0x19a81c: 0xc062a6a  jal         func_18A9A8
    ctx->pc = 0x19A81Cu;
    SET_GPR_U32(ctx, 31, 0x19A824u);
    ctx->pc = 0x19A820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A81Cu;
    // 0x19a820: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9A8u, 0x19A81Cu, 0x19A824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A824u;
label_19a824:
    // 0x19a824: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x19A824u;
    {
        const bool branch_taken_0x19a824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A824u;
        // 0x19a828: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a824) {
            ctx->pc = 0x19A860u;
            goto label_19a860;
        }
    }
    ctx->pc = 0x19A82Cu;
label_19a82c:
    // 0x19a82c: 0xc061a26  jal         func_186898
    ctx->pc = 0x19A82Cu;
    SET_GPR_U32(ctx, 31, 0x19A834u);
    ctx->pc = 0x19A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A82Cu;
    // 0x19a830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186898u, 0x19A82Cu, 0x19A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A834u;
label_19a834:
    // 0x19a834: 0xc4410138  lwc1        $f1, 0x138($v0)
    ctx->pc = 0x19a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x19a83c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19a83cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a840: 0x0  nop
    ctx->pc = 0x19a840u;
    // NOP
    // 0x19a844: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a844u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a848: 0x0  nop
    ctx->pc = 0x19a848u;
    // NOP
    // 0x19a84c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x19A84Cu;
    {
        const bool branch_taken_0x19a84c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a84c) {
            ctx->pc = 0x19A850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19A84Cu;
            // 0x19a850: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19A860u;
            goto label_19a860;
        }
    }
    ctx->pc = 0x19A854u;
    // 0x19a854: 0xc062a6a  jal         func_18A9A8
    ctx->pc = 0x19A854u;
    SET_GPR_U32(ctx, 31, 0x19A85Cu);
    ctx->pc = 0x19A858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A854u;
    // 0x19a858: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9A8u, 0x19A854u, 0x19A85Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A85Cu;
label_19a85c:
    // 0x19a85c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a85cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19a860:
    // 0x19a860: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19a860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a864: 0x3e00008  jr          $ra
    ctx->pc = 0x19A864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A864u;
        // 0x19a868: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A86Cu;
    // 0x19a86c: 0x0  nop
    ctx->pc = 0x19a86cu;
    // NOP
    ctx->pc = 0x19a870u;
}
