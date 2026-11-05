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

// Function: sub_00172AD8
// Address: 0x172ad8 - 0x172c98
void sub_00172AD8_0x172ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172AD8_0x172ad8");
#endif

    switch (ctx->pc) {
        case 0x172b08u: goto label_172b08;
        case 0x172b70u: goto label_172b70;
        case 0x172ba4u: goto label_172ba4;
        case 0x172c20u: goto label_172c20;
        default: break;
    }

    ctx->pc = 0x172ad8u;

    // 0x172ad8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x172ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x172adc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x172adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x172ae0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x172ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x172ae4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x172ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172ae8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x172ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x172aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172af0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x172af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x172af4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x172af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x172af8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x172af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x172afc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x172afcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x172b00: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x172B00u;
    SET_GPR_U32(ctx, 31, 0x172B08u);
    ctx->pc = 0x172B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B00u;
    // 0x172b04: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x172B00u, 0x172B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172B08u;
label_172b08:
    // 0x172b08: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x172b08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b0c: 0x11000057  beqz        $t0, . + 4 + (0x57 << 2)
    ctx->pc = 0x172B0Cu;
    {
        const bool branch_taken_0x172b0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B0Cu;
        // 0x172b10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b0c) {
            ctx->pc = 0x172C6Cu;
            goto label_172c6c;
        }
    }
    ctx->pc = 0x172B14u;
    // 0x172b14: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x172b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x172b18: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x172B18u;
    {
        const bool branch_taken_0x172b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x172B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B18u;
        // 0x172b1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b18) {
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172B20u;
    // 0x172b20: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x172b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x172b24: 0x50a00053  beql        $a1, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x172B24u;
    {
        const bool branch_taken_0x172b24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x172b24) {
            ctx->pc = 0x172B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172B24u;
            // 0x172b28: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172C74u;
            goto label_172c74;
        }
    }
    ctx->pc = 0x172B2Cu;
    // 0x172b2c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x172b2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x172b30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x172b30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b34: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x172b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b38: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x172B38u;
    {
        const bool branch_taken_0x172b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B38u;
        // 0x172b3c: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b38) {
            ctx->pc = 0x172C6Cu;
            goto label_172c6c;
        }
    }
    ctx->pc = 0x172B40u;
    // 0x172b40: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x172b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x172b44: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x172b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172b48: 0x24429c14  addiu       $v0, $v0, -0x63EC
    ctx->pc = 0x172b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x172b4c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x172b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x172b50: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x172b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x172b54: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x172b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x172b58: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x172b58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x172b5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x172b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x172b60: 0x2452fefc  addiu       $s2, $v0, -0x104
    ctx->pc = 0x172b60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967036));
    // 0x172b64: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x172b64u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x172b68: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x172b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x172b6c: 0x0  nop
    ctx->pc = 0x172b6cu;
    // NOP
label_172b70:
    // 0x172b70: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x172b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x172b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x172b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172b78: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172b7c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x172B7Cu;
    {
        const bool branch_taken_0x172b7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B7Cu;
        // 0x172b80: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b7c) {
            ctx->pc = 0x172C50u;
            goto label_172c50;
        }
    }
    ctx->pc = 0x172B84u;
    // 0x172b84: 0x14650032  bne         $v1, $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x172B84u;
    {
        const bool branch_taken_0x172b84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x172B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B84u;
        // 0x172b88: 0x304700ff  andi        $a3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b84) {
            ctx->pc = 0x172C50u;
            goto label_172c50;
        }
    }
    ctx->pc = 0x172B8Cu;
    // 0x172b8c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x172b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172b90: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
    ctx->pc = 0x172B90u;
    {
        const bool branch_taken_0x172b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172B90u;
        // 0x172b94: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172b90) {
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172B98u;
    // 0x172b98: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x172b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172b9c: 0xc044234  jal         func_1108D0
    ctx->pc = 0x172B9Cu;
    SET_GPR_U32(ctx, 31, 0x172BA4u);
    ctx->pc = 0x172BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172B9Cu;
    // 0x172ba0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1108D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1108D0u, 0x172B9Cu, 0x172BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172BA4u;
label_172ba4:
    // 0x172ba4: 0x14540032  bne         $v0, $s4, . + 4 + (0x32 << 2)
    ctx->pc = 0x172BA4u;
    {
        const bool branch_taken_0x172ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x172BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BA4u;
        // 0x172ba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ba4) {
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172BACu;
    // 0x172bac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x172bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x172bb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x172bb4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x172bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x172bb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172bbc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x172BBCu;
    {
        const bool branch_taken_0x172bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172bbc) {
            ctx->pc = 0x172BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172BBCu;
            // 0x172bc0: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172BCCu;
            goto label_172bcc;
        }
    }
    ctx->pc = 0x172BC4u;
    // 0x172bc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172BC4u;
    {
        const bool branch_taken_0x172bc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BC4u;
        // 0x172bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bc4) {
            ctx->pc = 0x172BD4u;
            goto label_172bd4;
        }
    }
    ctx->pc = 0x172BCCu;
label_172bcc:
    // 0x172bcc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172bd0: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x172bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_172bd4:
    // 0x172bd4: 0x10c00026  beqz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x172BD4u;
    {
        const bool branch_taken_0x172bd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BD4u;
        // 0x172bd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172bd4) {
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172BDCu;
    // 0x172bdc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x172bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x172be0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x172BE0u;
    {
        const bool branch_taken_0x172be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172BE0u;
        // 0x172be4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172be0) {
            ctx->pc = 0x172C74u;
            goto label_172c74;
        }
    }
    ctx->pc = 0x172BE8u;
    // 0x172be8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x172be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x172bec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x172bf0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x172bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x172bf4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x172bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172bf8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x172BF8u;
    {
        const bool branch_taken_0x172bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x172bf8) {
            ctx->pc = 0x172BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172BF8u;
            // 0x172bfc: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172C08u;
            goto label_172c08;
        }
    }
    ctx->pc = 0x172C00u;
    // 0x172c00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x172C00u;
    {
        const bool branch_taken_0x172c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C00u;
        // 0x172c04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c00) {
            ctx->pc = 0x172C10u;
            goto label_172c10;
        }
    }
    ctx->pc = 0x172C08u;
label_172c08:
    // 0x172c08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x172c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x172c0c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x172c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_172c10:
    // 0x172c10: 0x10a00017  beqz        $a1, . + 4 + (0x17 << 2)
    ctx->pc = 0x172C10u;
    {
        const bool branch_taken_0x172c10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C10u;
        // 0x172c14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c10) {
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172C18u;
    // 0x172c18: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x172C18u;
    SET_GPR_U32(ctx, 31, 0x172C20u);
    ctx->pc = 0x172C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172C18u;
    // 0x172c1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x172C18u, 0x172C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172C20u;
label_172c20:
    // 0x172c20: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x172c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x172c24: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x172c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x172c28: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x172c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x172c2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x172c2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x172c30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x172c30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x172c34: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x172c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x172c38: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x172c38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x172c3c: 0x0  nop
    ctx->pc = 0x172c3cu;
    // NOP
    // 0x172c40: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x172C40u;
    {
        const bool branch_taken_0x172c40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x172C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C40u;
        // 0x172c44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c40) {
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172C48u;
    // 0x172c48: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x172C48u;
    {
        const bool branch_taken_0x172c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C48u;
        // 0x172c4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c48) {
            ctx->pc = 0x172C70u;
            goto label_172c70;
        }
    }
    ctx->pc = 0x172C50u;
label_172c50:
    // 0x172c50: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x172c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x172c54: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x172c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x172c58: 0x2cc30010  sltiu       $v1, $a2, 0x10
    ctx->pc = 0x172c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x172c5c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x172C5Cu;
    {
        const bool branch_taken_0x172c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C5Cu;
        // 0x172c60: 0x312200ff  andi        $v0, $t1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c5c) {
            ctx->pc = 0x172C6Cu;
            goto label_172c6c;
        }
    }
    ctx->pc = 0x172C64u;
    // 0x172c64: 0x54e2ffc2  bnel        $a3, $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x172C64u;
    {
        const bool branch_taken_0x172c64 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x172c64) {
            ctx->pc = 0x172C68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x172C64u;
            // 0x172c68: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x172B70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_172b70;
        }
    }
    ctx->pc = 0x172C6Cu;
label_172c6c:
    // 0x172c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x172c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172c70:
    // 0x172c70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x172c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172c74:
    // 0x172c74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x172c74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x172c78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x172c78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x172c7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x172c7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x172c80: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x172c80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x172c84: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x172c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x172c88: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x172c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x172c8c: 0x3e00008  jr          $ra
    ctx->pc = 0x172C8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x172C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172C8Cu;
        // 0x172c90: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172C8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172C94u;
    // 0x172c94: 0x0  nop
    ctx->pc = 0x172c94u;
    // NOP
    ctx->pc = 0x172c98u;
}
