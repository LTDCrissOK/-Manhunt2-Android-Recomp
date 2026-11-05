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

// Function: sub_002CC578
// Address: 0x2cc578 - 0x2cc680
void sub_002CC578_0x2cc578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC578_0x2cc578");
#endif

    switch (ctx->pc) {
        case 0x2cc5bcu: goto label_2cc5bc;
        case 0x2cc5c4u: goto label_2cc5c4;
        case 0x2cc5e0u: goto label_2cc5e0;
        case 0x2cc5f0u: goto label_2cc5f0;
        case 0x2cc600u: goto label_2cc600;
        case 0x2cc610u: goto label_2cc610;
        case 0x2cc668u: goto label_2cc668;
        case 0x2cc670u: goto label_2cc670;
        default: break;
    }

    ctx->pc = 0x2cc578u;

    // 0x2cc578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cc578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cc57c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2cc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2cc580: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cc580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cc584: 0x2442a600  addiu       $v0, $v0, -0x5A00
    ctx->pc = 0x2cc584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x2cc588: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cc588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cc58c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2cc58cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cc590: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2cc590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2cc594: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x2cc594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x2cc598: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x2cc598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cc59c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2cc59cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2cc5a0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x2cc5a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x2cc5a4: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2cc5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x2cc5a8: 0x2610a608  addiu       $s0, $s0, -0x59F8
    ctx->pc = 0x2cc5a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944264));
    // 0x2cc5ac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x2cc5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2cc5b0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2cc5b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2cc5b4: 0xc0e3c92  jal         func_38F248
    ctx->pc = 0x2CC5B4u;
    SET_GPR_U32(ctx, 31, 0x2CC5BCu);
    ctx->pc = 0x2CC5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5B4u;
    // 0x2cc5b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F248u, 0x2CC5B4u, 0x2CC5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5BCu;
label_2cc5bc:
    // 0x2cc5bc: 0xc0e3c96  jal         func_38F258
    ctx->pc = 0x2CC5BCu;
    SET_GPR_U32(ctx, 31, 0x2CC5C4u);
    ctx->pc = 0x2CC5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5BCu;
    // 0x2cc5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F258u, 0x2CC5BCu, 0x2CC5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5C4u;
label_2cc5c4:
    // 0x2cc5c4: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2cc5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2cc5c8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2cc5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2cc5cc: 0xfc62a620  sd          $v0, -0x59E0($v1)
    ctx->pc = 0x2cc5ccu;
    do { uint64_t _value = static_cast<uint64_t>(GPR_U64(ctx, 2)); ps2TraceGuestWrite(rdram, 0x57A620u, 8u, _value, 0u, "WRITE64", ctx); FAST_WRITE64(0x57A620u, _value); } while (0);
    // 0x2cc5d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc5d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc5d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5d8: 0xc0b300c  jal         func_2CC030
    ctx->pc = 0x2CC5D8u;
    SET_GPR_U32(ctx, 31, 0x2CC5E0u);
    ctx->pc = 0x2CC5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5D8u;
    // 0x2cc5dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC030u, 0x2CC5D8u, 0x2CC5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5E0u;
label_2cc5e0:
    // 0x2cc5e0: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2cc5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2cc5e4: 0x244209f0  addiu       $v0, $v0, 0x9F0
    ctx->pc = 0x2cc5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2544));
    // 0x2cc5e8: 0xc0b305e  jal         func_2CC178
    ctx->pc = 0x2CC5E8u;
    SET_GPR_U32(ctx, 31, 0x2CC5F0u);
    ctx->pc = 0x2CC5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5E8u;
    // 0x2cc5ec: 0x78440000  lq          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC178u, 0x2CC5E8u, 0x2CC5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC5F0u;
label_2cc5f0:
    // 0x2cc5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc5f4: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x2cc5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x2cc5f8: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC5F8u;
    SET_GPR_U32(ctx, 31, 0x2CC600u);
    ctx->pc = 0x2CC5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC5F8u;
    // 0x2cc5fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC5F8u, 0x2CC600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC600u;
label_2cc600:
    // 0x2cc600: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc604: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x2cc604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x2cc608: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC608u;
    SET_GPR_U32(ctx, 31, 0x2CC610u);
    ctx->pc = 0x2CC60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC608u;
    // 0x2cc60c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC608u, 0x2CC610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC610u;
label_2cc610:
    // 0x2cc610: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2cc610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2cc614: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x2cc614u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
    // 0x2cc618: 0x8c43b4a8  lw          $v1, -0x4B58($v0)
    ctx->pc = 0x2cc618u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cc61c: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x2cc61cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2cc620: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2cc620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc624: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2cc624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2cc628: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2cc628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2cc62c: 0x8c6632f8  lw          $a2, 0x32F8($v1)
    ctx->pc = 0x2cc62cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13048)));
    // 0x2cc630: 0x8c6732f4  lw          $a3, 0x32F4($v1)
    ctx->pc = 0x2cc630u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 13044)));
    // 0x2cc634: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x2cc634u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x2cc638: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2cc638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2cc63c: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x2cc63cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2cc640: 0xe33821  addu        $a3, $a3, $v1
    ctx->pc = 0x2cc640u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2cc644: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x2cc644u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x2cc648: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x2cc648u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x2cc64c: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x2cc64cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x2cc650: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x2cc650u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x2cc654: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x2cc654u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x2cc658: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x2cc658u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x2cc65c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2cc65cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2cc660: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CC660u;
    SET_GPR_U32(ctx, 31, 0x2CC668u);
    ctx->pc = 0x2CC664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CC660u;
    // 0x2cc664: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CC660u, 0x2CC668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC668u;
label_2cc668:
    // 0x2cc668: 0xc0b306a  jal         func_2CC1A8
    ctx->pc = 0x2CC668u;
    SET_GPR_U32(ctx, 31, 0x2CC670u);
    ctx->pc = 0x2CC1A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC1A8u, 0x2CC668u, 0x2CC670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CC670u;
label_2cc670:
    // 0x2cc670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cc670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc674: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cc674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cc678: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC67Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC678u;
        // 0x2cc67c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC680u;
}
