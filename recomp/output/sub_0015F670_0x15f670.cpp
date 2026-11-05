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

// Function: sub_0015F670
// Address: 0x15f670 - 0x15f808
void sub_0015F670_0x15f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F670_0x15f670");
#endif

    switch (ctx->pc) {
        case 0x15f6bcu: goto label_15f6bc;
        case 0x15f720u: goto label_15f720;
        case 0x15f750u: goto label_15f750;
        case 0x15f78cu: goto label_15f78c;
        default: break;
    }

    ctx->pc = 0x15f670u;

    // 0x15f670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15f670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15f674: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f678: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15f678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15f67c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x15f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x15f680: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15f680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15f684: 0x24519a08  addiu       $s1, $v0, -0x65F8
    ctx->pc = 0x15f684u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x15f688: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15f688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15f68c: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x15f68cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x15f690: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x15f690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x15f694: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x15f694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x15f698: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x15f698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x15f69c: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x15f69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x15f6a0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x15f6a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x15f6a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15f6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15f6a8: 0x8cb0020c  lw          $s0, 0x20C($a1)
    ctx->pc = 0x15f6a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 524)));
    // 0x15f6ac: 0x12000049  beqz        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x15F6ACu;
    {
        const bool branch_taken_0x15f6ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6ACu;
        // 0x15f6b0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6ac) {
            ctx->pc = 0x15F7D4u;
            goto label_15f7d4;
        }
    }
    ctx->pc = 0x15F6B4u;
    // 0x15f6b4: 0xc043a64  jal         func_10E990
    ctx->pc = 0x15F6B4u;
    SET_GPR_U32(ctx, 31, 0x15F6BCu);
    ctx->pc = 0x15F6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F6B4u;
    // 0x15f6b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E990u, 0x15F6B4u, 0x15F6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F6BCu;
label_15f6bc:
    // 0x15f6bc: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x15F6BCu;
    {
        const bool branch_taken_0x15f6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6BCu;
        // 0x15f6c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6bc) {
            ctx->pc = 0x15F7D8u;
            goto label_15f7d8;
        }
    }
    ctx->pc = 0x15F6C4u;
    // 0x15f6c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15f6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f6c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f6cc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x15f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x15f6d0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x15f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x15f6d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F6D4u;
    {
        const bool branch_taken_0x15f6d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f6d4) {
            ctx->pc = 0x15F6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F6D4u;
            // 0x15f6d8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F6E4u;
            goto label_15f6e4;
        }
    }
    ctx->pc = 0x15F6DCu;
    // 0x15f6dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F6DCu;
    {
        const bool branch_taken_0x15f6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6DCu;
        // 0x15f6e0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6dc) {
            ctx->pc = 0x15F6ECu;
            goto label_15f6ec;
        }
    }
    ctx->pc = 0x15F6E4u;
label_15f6e4:
    // 0x15f6e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f6e8: 0x24750070  addiu       $s5, $v1, 0x70
    ctx->pc = 0x15f6e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f6ec:
    // 0x15f6ec: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F6ECu;
    {
        const bool branch_taken_0x15f6ec = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x15F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6ECu;
        // 0x15f6f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6ec) {
            ctx->pc = 0x15F6FCu;
            goto label_15f6fc;
        }
    }
    ctx->pc = 0x15F6F4u;
    // 0x15f6f4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x15F6F4u;
    {
        const bool branch_taken_0x15f6f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F6F4u;
        // 0x15f6f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f6f4) {
            ctx->pc = 0x15F7D8u;
            goto label_15f7d8;
        }
    }
    ctx->pc = 0x15F6FCu;
label_15f6fc:
    // 0x15f6fc: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x15f6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x15f700: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x15F700u;
    {
        const bool branch_taken_0x15f700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F700u;
        // 0x15f704: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f700) {
            ctx->pc = 0x15F7D4u;
            goto label_15f7d4;
        }
    }
    ctx->pc = 0x15F708u;
    // 0x15f708: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x15f708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x15f70c: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x15f70cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x15f710: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x15f710u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x15f714: 0x24549c14  addiu       $s4, $v0, -0x63EC
    ctx->pc = 0x15f714u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x15f718: 0x2696fefc  addiu       $s6, $s4, -0x104
    ctx->pc = 0x15f718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967036));
    // 0x15f71c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x15f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_15f720:
    // 0x15f720: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15f724: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15f724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15f728: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f72c: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x15F72Cu;
    {
        const bool branch_taken_0x15f72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F72Cu;
        // 0x15f730: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f72c) {
            ctx->pc = 0x15F7B4u;
            goto label_15f7b4;
        }
    }
    ctx->pc = 0x15F734u;
    // 0x15f734: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x15f734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x15f738: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x15f738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x15f73c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x15f73cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f740: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x15F740u;
    {
        const bool branch_taken_0x15f740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F740u;
        // 0x15f744: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f740) {
            ctx->pc = 0x15F7B4u;
            goto label_15f7b4;
        }
    }
    ctx->pc = 0x15F748u;
    // 0x15f748: 0xc043996  jal         func_10E658
    ctx->pc = 0x15F748u;
    SET_GPR_U32(ctx, 31, 0x15F750u);
    ctx->pc = 0x15F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F748u;
    // 0x15f74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x15F748u, 0x15F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F750u;
label_15f750:
    // 0x15f750: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x15F750u;
    {
        const bool branch_taken_0x15f750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F750u;
        // 0x15f754: 0x26220001  addiu       $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f750) {
            ctx->pc = 0x15F7B8u;
            goto label_15f7b8;
        }
    }
    ctx->pc = 0x15F758u;
    // 0x15f758: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15f758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15f75c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15f760: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x15f760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x15f764: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15f764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f768: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x15F768u;
    {
        const bool branch_taken_0x15f768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15f768) {
            ctx->pc = 0x15F76Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F768u;
            // 0x15f76c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F778u;
            goto label_15f778;
        }
    }
    ctx->pc = 0x15F770u;
    // 0x15f770: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15F770u;
    {
        const bool branch_taken_0x15f770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F770u;
        // 0x15f774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f770) {
            ctx->pc = 0x15F780u;
            goto label_15f780;
        }
    }
    ctx->pc = 0x15F778u;
label_15f778:
    // 0x15f778: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15f77c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x15f77cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_15f780:
    // 0x15f780: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15f780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f784: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15F784u;
    SET_GPR_U32(ctx, 31, 0x15F78Cu);
    ctx->pc = 0x15F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F784u;
    // 0x15f788: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15F784u, 0x15F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15F78Cu;
label_15f78c:
    // 0x15f78c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15f78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15f790: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15f790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15f794: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15f794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15f798: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15f798u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15f79c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15f79cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15f7a0: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x15f7a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15f7a4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x15f7a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15f7a8: 0x0  nop
    ctx->pc = 0x15f7a8u;
    // NOP
    // 0x15f7ac: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x15F7ACu;
    {
        const bool branch_taken_0x15f7ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15F7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7ACu;
        // 0x15f7b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7ac) {
            ctx->pc = 0x15F7D8u;
            goto label_15f7d8;
        }
    }
    ctx->pc = 0x15F7B4u;
label_15f7b4:
    // 0x15f7b4: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x15f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_15f7b8:
    // 0x15f7b8: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x15f7b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15f7bc: 0x2e230010  sltiu       $v1, $s1, 0x10
    ctx->pc = 0x15f7bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x15f7c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F7C0u;
    {
        const bool branch_taken_0x15f7c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7C0u;
        // 0x15f7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f7c0) {
            ctx->pc = 0x15F7D8u;
            goto label_15f7d8;
        }
    }
    ctx->pc = 0x15F7C8u;
    // 0x15f7c8: 0x92620009  lbu         $v0, 0x9($s3)
    ctx->pc = 0x15f7c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 9)));
    // 0x15f7cc: 0x5642ffd4  bnel        $s2, $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x15F7CCu;
    {
        const bool branch_taken_0x15f7cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f7cc) {
            ctx->pc = 0x15F7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15F7CCu;
            // 0x15f7d0: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15F720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15f720;
        }
    }
    ctx->pc = 0x15F7D4u;
label_15f7d4:
    // 0x15f7d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f7d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f7d8:
    // 0x15f7d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15f7d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f7dc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15f7dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15f7e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15f7e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f7e4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15f7e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15f7e8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x15f7e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f7ec: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x15f7ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x15f7f0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x15f7f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f7f4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x15f7f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x15f7f8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x15f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15f7fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15F7FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F7FCu;
        // 0x15f800: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F7FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F804u;
    // 0x15f804: 0x0  nop
    ctx->pc = 0x15f804u;
    // NOP
    ctx->pc = 0x15f808u;
}
