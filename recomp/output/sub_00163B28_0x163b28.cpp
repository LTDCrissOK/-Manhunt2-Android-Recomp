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

// Function: sub_00163B28
// Address: 0x163b28 - 0x163cc8
void sub_00163B28_0x163b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00163B28_0x163b28");
#endif

    switch (ctx->pc) {
        case 0x163b88u: goto label_163b88;
        case 0x163bf0u: goto label_163bf0;
        case 0x163c50u: goto label_163c50;
        default: break;
    }

    ctx->pc = 0x163b28u;

    // 0x163b28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x163b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x163b2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x163b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x163b30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x163b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x163b34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x163b34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x163b38: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x163b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x163b3c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x163b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x163b40: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x163b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x163b44: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x163b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x163b48: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x163b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x163b4c: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x163b4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x163b50: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x163b50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x163b54: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x163B54u;
    {
        const bool branch_taken_0x163b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B54u;
        // 0x163b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b54) {
            ctx->pc = 0x163C9Cu;
            goto label_163c9c;
        }
    }
    ctx->pc = 0x163B5Cu;
    // 0x163b5c: 0x8e2202e0  lw          $v0, 0x2E0($s1)
    ctx->pc = 0x163b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 736)));
    // 0x163b60: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x163B60u;
    {
        const bool branch_taken_0x163b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B60u;
        // 0x163b64: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b60) {
            ctx->pc = 0x163C98u;
            goto label_163c98;
        }
    }
    ctx->pc = 0x163B68u;
    // 0x163b68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163b6c: 0x24729a08  addiu       $s2, $v1, -0x65F8
    ctx->pc = 0x163b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x163b70: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x163b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x163b74: 0x8c50020c  lw          $s0, 0x20C($v0)
    ctx->pc = 0x163b74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x163b78: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
    ctx->pc = 0x163B78u;
    {
        const bool branch_taken_0x163b78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B78u;
        // 0x163b7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b78) {
            ctx->pc = 0x163C9Cu;
            goto label_163c9c;
        }
    }
    ctx->pc = 0x163B80u;
    // 0x163b80: 0xc043a54  jal         func_10E950
    ctx->pc = 0x163B80u;
    SET_GPR_U32(ctx, 31, 0x163B88u);
    ctx->pc = 0x163B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163B80u;
    // 0x163b84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E950u, 0x163B80u, 0x163B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163B88u;
label_163b88:
    // 0x163b88: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x163B88u;
    {
        const bool branch_taken_0x163b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163B88u;
        // 0x163b8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163b88) {
            ctx->pc = 0x163C9Cu;
            goto label_163c9c;
        }
    }
    ctx->pc = 0x163B90u;
    // 0x163b90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x163b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x163b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163b98: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x163b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x163b9c: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x163b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x163ba0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x163BA0u;
    {
        const bool branch_taken_0x163ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163ba0) {
            ctx->pc = 0x163BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163BA0u;
            // 0x163ba4: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163BB0u;
            goto label_163bb0;
        }
    }
    ctx->pc = 0x163BA8u;
    // 0x163ba8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163BA8u;
    {
        const bool branch_taken_0x163ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BA8u;
        // 0x163bac: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163ba8) {
            ctx->pc = 0x163BB8u;
            goto label_163bb8;
        }
    }
    ctx->pc = 0x163BB0u;
label_163bb0:
    // 0x163bb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x163bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163bb4: 0x24740070  addiu       $s4, $v1, 0x70
    ctx->pc = 0x163bb4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_163bb8:
    // 0x163bb8: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x163BB8u;
    {
        const bool branch_taken_0x163bb8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x163BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BB8u;
        // 0x163bbc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bb8) {
            ctx->pc = 0x163BC8u;
            goto label_163bc8;
        }
    }
    ctx->pc = 0x163BC0u;
    // 0x163bc0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x163BC0u;
    {
        const bool branch_taken_0x163bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BC0u;
        // 0x163bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bc0) {
            ctx->pc = 0x163C9Cu;
            goto label_163c9c;
        }
    }
    ctx->pc = 0x163BC8u;
label_163bc8:
    // 0x163bc8: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x163bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x163bcc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x163BCCu;
    {
        const bool branch_taken_0x163bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BCCu;
        // 0x163bd0: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bcc) {
            ctx->pc = 0x163C98u;
            goto label_163c98;
        }
    }
    ctx->pc = 0x163BD4u;
    // 0x163bd4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x163bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x163bd8: 0x3c014244  lui         $at, 0x4244
    ctx->pc = 0x163bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16964 << 16));
    // 0x163bdc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x163bdcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x163be0: 0x24539c14  addiu       $s3, $v0, -0x63EC
    ctx->pc = 0x163be0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941716));
    // 0x163be4: 0x2675fefc  addiu       $s5, $s3, -0x104
    ctx->pc = 0x163be4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967036));
    // 0x163be8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x163be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x163bec: 0x0  nop
    ctx->pc = 0x163becu;
    // NOP
label_163bf0:
    // 0x163bf0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x163bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x163bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x163bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x163bf8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x163bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163bfc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x163BFCu;
    {
        const bool branch_taken_0x163bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163BFCu;
        // 0x163c00: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163bfc) {
            ctx->pc = 0x163C78u;
            goto label_163c78;
        }
    }
    ctx->pc = 0x163C04u;
    // 0x163c04: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x163c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x163c08: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x163c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x163c0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x163c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163c10: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x163C10u;
    {
        const bool branch_taken_0x163c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C10u;
        // 0x163c14: 0x307200ff  andi        $s2, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c10) {
            ctx->pc = 0x163C78u;
            goto label_163c78;
        }
    }
    ctx->pc = 0x163C18u;
    // 0x163c18: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x163c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x163c1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x163c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163c20: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x163c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x163c24: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x163c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163c28: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x163C28u;
    {
        const bool branch_taken_0x163c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x163c28) {
            ctx->pc = 0x163C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163C28u;
            // 0x163c2c: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163C38u;
            goto label_163c38;
        }
    }
    ctx->pc = 0x163C30u;
    // 0x163c30: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x163C30u;
    {
        const bool branch_taken_0x163c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C30u;
        // 0x163c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c30) {
            ctx->pc = 0x163C40u;
            goto label_163c40;
        }
    }
    ctx->pc = 0x163C38u;
label_163c38:
    // 0x163c38: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x163c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x163c3c: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x163c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_163c40:
    // 0x163c40: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x163C40u;
    {
        const bool branch_taken_0x163c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C40u;
        // 0x163c44: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c40) {
            ctx->pc = 0x163C78u;
            goto label_163c78;
        }
    }
    ctx->pc = 0x163C48u;
    // 0x163c48: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x163C48u;
    SET_GPR_U32(ctx, 31, 0x163C50u);
    ctx->pc = 0x163C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163C48u;
    // 0x163c4c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x163C48u, 0x163C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163C50u;
label_163c50:
    // 0x163c50: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x163c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x163c54: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x163c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x163c58: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x163c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x163c5c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x163c5cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x163c60: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x163c60u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x163c64: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x163c64u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x163c68: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x163c68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x163c6c: 0x0  nop
    ctx->pc = 0x163c6cu;
    // NOP
    // 0x163c70: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x163C70u;
    {
        const bool branch_taken_0x163c70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x163C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C70u;
        // 0x163c74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c70) {
            ctx->pc = 0x163C9Cu;
            goto label_163c9c;
        }
    }
    ctx->pc = 0x163C78u;
label_163c78:
    // 0x163c78: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x163c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x163c7c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x163c7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x163c80: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x163c80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x163c84: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x163C84u;
    {
        const bool branch_taken_0x163c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x163C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163C84u;
        // 0x163c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163c84) {
            ctx->pc = 0x163C9Cu;
            goto label_163c9c;
        }
    }
    ctx->pc = 0x163C8Cu;
    // 0x163c8c: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x163c8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x163c90: 0x5642ffd7  bnel        $s2, $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x163C90u;
    {
        const bool branch_taken_0x163c90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x163c90) {
            ctx->pc = 0x163C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x163C90u;
            // 0x163c94: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x163BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_163bf0;
        }
    }
    ctx->pc = 0x163C98u;
label_163c98:
    // 0x163c98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x163c98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_163c9c:
    // 0x163c9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x163c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x163ca0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x163ca0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x163ca4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x163ca4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x163ca8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x163ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x163cac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x163cacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x163cb0: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x163cb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x163cb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x163cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x163cb8: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x163cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x163cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x163CBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x163CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163CBCu;
        // 0x163cc0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x163CBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x163CC4u;
    // 0x163cc4: 0x0  nop
    ctx->pc = 0x163cc4u;
    // NOP
    ctx->pc = 0x163cc8u;
}
