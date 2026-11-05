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

// Function: sub_0019E5A0
// Address: 0x19e5a0 - 0x19e6f8
void sub_0019E5A0_0x19e5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019E5A0_0x19e5a0");
#endif

    switch (ctx->pc) {
        case 0x19e5c8u: goto label_19e5c8;
        case 0x19e5f4u: goto label_19e5f4;
        case 0x19e618u: goto label_19e618;
        case 0x19e63cu: goto label_19e63c;
        case 0x19e654u: goto label_19e654;
        case 0x19e668u: goto label_19e668;
        default: break;
    }

    ctx->pc = 0x19e5a0u;

    // 0x19e5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19e5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19e5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19e5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19e5a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19e5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19e5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19e5b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x19e5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19e5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19e5bc: 0x8e240ff8  lw          $a0, 0xFF8($s1)
    ctx->pc = 0x19e5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x19e5c0: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x19E5C0u;
    SET_GPR_U32(ctx, 31, 0x19E5C8u);
    ctx->pc = 0x19E5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5C0u;
    // 0x19e5c4: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x19E5C0u, 0x19E5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5C8u;
label_19e5c8:
    // 0x19e5c8: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19E5C8u;
    {
        const bool branch_taken_0x19e5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5C8u;
        // 0x19e5cc: 0x26070050  addiu       $a3, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5c8) {
            ctx->pc = 0x19E644u;
            goto label_19e644;
        }
    }
    ctx->pc = 0x19E5D0u;
    // 0x19e5d0: 0x8ce30010  lw          $v1, 0x10($a3)
    ctx->pc = 0x19e5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x19e5d4: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19E5D4u;
    {
        const bool branch_taken_0x19e5d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5D4u;
        // 0x19e5d8: 0x38620003  xori        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5d4) {
            ctx->pc = 0x19E5FCu;
            goto label_19e5fc;
        }
    }
    ctx->pc = 0x19E5DCu;
    // 0x19e5dc: 0x8ce70014  lw          $a3, 0x14($a3)
    ctx->pc = 0x19e5dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x19e5e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e5e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e5e4: 0xc60c007c  lwc1        $f12, 0x7C($s0)
    ctx->pc = 0x19e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19e5e8: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x19e5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19e5ec: 0xc0950ba  jal         func_2542E8
    ctx->pc = 0x19E5ECu;
    SET_GPR_U32(ctx, 31, 0x19E5F4u);
    ctx->pc = 0x19E5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E5ECu;
    // 0x19e5f0: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2542E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2542E8u, 0x19E5ECu, 0x19E5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E5F4u;
label_19e5f4:
    // 0x19e5f4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x19E5F4u;
    {
        const bool branch_taken_0x19e5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5F4u;
        // 0x19e5f8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5f4) {
            ctx->pc = 0x19E66Cu;
            goto label_19e66c;
        }
    }
    ctx->pc = 0x19E5FCu;
label_19e5fc:
    // 0x19e5fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E5FCu;
    {
        const bool branch_taken_0x19e5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E5FCu;
        // 0x19e600: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e5fc) {
            ctx->pc = 0x19E620u;
            goto label_19e620;
        }
    }
    ctx->pc = 0x19E604u;
    // 0x19e604: 0xc60c007c  lwc1        $f12, 0x7C($s0)
    ctx->pc = 0x19e604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19e608: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e60c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x19e60cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x19e610: 0xc09508e  jal         func_254238
    ctx->pc = 0x19E610u;
    SET_GPR_U32(ctx, 31, 0x19E618u);
    ctx->pc = 0x19E614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E610u;
    // 0x19e614: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254238u, 0x19E610u, 0x19E618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E618u;
label_19e618:
    // 0x19e618: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x19E618u;
    {
        const bool branch_taken_0x19e618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E618u;
        // 0x19e61c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e618) {
            ctx->pc = 0x19E66Cu;
            goto label_19e66c;
        }
    }
    ctx->pc = 0x19E620u;
label_19e620:
    // 0x19e620: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x19E620u;
    {
        const bool branch_taken_0x19e620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E620u;
        // 0x19e624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e620) {
            ctx->pc = 0x19E668u;
            goto label_19e668;
        }
    }
    ctx->pc = 0x19E628u;
    // 0x19e628: 0x8ce70014  lw          $a3, 0x14($a3)
    ctx->pc = 0x19e628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x19e62c: 0xc60c007c  lwc1        $f12, 0x7C($s0)
    ctx->pc = 0x19e62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19e630: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x19e630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x19e634: 0xc0950a4  jal         func_254290
    ctx->pc = 0x19E634u;
    SET_GPR_U32(ctx, 31, 0x19E63Cu);
    ctx->pc = 0x19E638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E634u;
    // 0x19e638: 0x8e050044  lw          $a1, 0x44($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254290u, 0x19E634u, 0x19E63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E63Cu;
label_19e63c:
    // 0x19e63c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x19E63Cu;
    {
        const bool branch_taken_0x19e63c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E63Cu;
        // 0x19e640: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e63c) {
            ctx->pc = 0x19E66Cu;
            goto label_19e66c;
        }
    }
    ctx->pc = 0x19E644u;
label_19e644:
    // 0x19e644: 0x8e240ff8  lw          $a0, 0xFF8($s1)
    ctx->pc = 0x19e644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4088)));
    // 0x19e648: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19e648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19e64c: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x19E64Cu;
    SET_GPR_U32(ctx, 31, 0x19E654u);
    ctx->pc = 0x19E650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E64Cu;
    // 0x19e650: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x19E64Cu, 0x19E654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E654u;
label_19e654:
    // 0x19e654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19E654u;
    {
        const bool branch_taken_0x19e654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E654u;
        // 0x19e658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e654) {
            ctx->pc = 0x19E668u;
            goto label_19e668;
        }
    }
    ctx->pc = 0x19E65Cu;
    // 0x19e65c: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x19e65cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x19e660: 0xc095078  jal         func_2541E0
    ctx->pc = 0x19E660u;
    SET_GPR_U32(ctx, 31, 0x19E668u);
    ctx->pc = 0x19E664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E660u;
    // 0x19e664: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2541E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2541E0u, 0x19E660u, 0x19E668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E668u;
label_19e668:
    // 0x19e668: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19e668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19e66c:
    // 0x19e66c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19e66cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19e670: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19e670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19e674: 0x3e00008  jr          $ra
    ctx->pc = 0x19E674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E674u;
        // 0x19e678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E67Cu;
    // 0x19e67c: 0x0  nop
    ctx->pc = 0x19e67cu;
    // NOP
    // 0x19e680: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x19e680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e684: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x19e684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19e688: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x19e688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x19e68c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x19e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x19e690: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x19E690u;
    {
        const bool branch_taken_0x19e690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x19E694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E690u;
        // 0x19e694: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e690) {
            ctx->pc = 0x19E6C8u;
            goto label_19e6c8;
        }
    }
    ctx->pc = 0x19E698u;
    // 0x19e698: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x19e698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19e69c: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x19e69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19e6a0: 0x8c651004  lw          $a1, 0x1004($v1)
    ctx->pc = 0x19e6a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    // 0x19e6a4: 0x8c821004  lw          $v0, 0x1004($a0)
    ctx->pc = 0x19e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x19e6a8: 0x14a20010  bne         $a1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x19E6A8u;
    {
        const bool branch_taken_0x19e6a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6A8u;
        // 0x19e6ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6a8) {
            ctx->pc = 0x19E6ECu;
            goto label_19e6ec;
        }
    }
    ctx->pc = 0x19E6B0u;
    // 0x19e6b0: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x19e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
    // 0x19e6b4: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x19e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
    // 0x19e6b8: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x19E6B8u;
    {
        const bool branch_taken_0x19e6b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6B8u;
        // 0x19e6bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6b8) {
            ctx->pc = 0x19E6ECu;
            goto label_19e6ec;
        }
    }
    ctx->pc = 0x19E6C0u;
    // 0x19e6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x19E6C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C0u;
        // 0x19e6c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E6C8u;
label_19e6c8:
    // 0x19e6c8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19E6C8u;
    {
        const bool branch_taken_0x19e6c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19E6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6C8u;
        // 0x19e6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6c8) {
            ctx->pc = 0x19E6ECu;
            goto label_19e6ec;
        }
    }
    ctx->pc = 0x19E6D0u;
    // 0x19e6d0: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x19e6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x19e6d4: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x19e6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x19e6d8: 0x8cc51004  lw          $a1, 0x1004($a2)
    ctx->pc = 0x19e6d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4100)));
    // 0x19e6dc: 0x8c831004  lw          $v1, 0x1004($a0)
    ctx->pc = 0x19e6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4100)));
    // 0x19e6e0: 0x10a30002  beq         $a1, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x19E6E0u;
    {
        const bool branch_taken_0x19e6e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x19E6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E6E0u;
        // 0x19e6e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e6e0) {
            ctx->pc = 0x19E6ECu;
            goto label_19e6ec;
        }
    }
    ctx->pc = 0x19E6E8u;
    // 0x19e6e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19e6e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e6ec:
    // 0x19e6ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19E6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E6ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19E6F4u;
    // 0x19e6f4: 0x0  nop
    ctx->pc = 0x19e6f4u;
    // NOP
    ctx->pc = 0x19e6f8u;
}
