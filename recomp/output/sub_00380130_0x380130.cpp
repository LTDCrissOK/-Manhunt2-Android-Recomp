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

// Function: sub_00380130
// Address: 0x380130 - 0x380228
void sub_00380130_0x380130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380130_0x380130");
#endif

    switch (ctx->pc) {
        case 0x380164u: goto label_380164;
        case 0x380188u: goto label_380188;
        case 0x3801acu: goto label_3801ac;
        case 0x3801c0u: goto label_3801c0;
        case 0x380218u: goto label_380218;
        default: break;
    }

    ctx->pc = 0x380130u;

    // 0x380130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x380130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x380134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x380134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x380138: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x38013c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38013cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x380140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x380144: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x380144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380148: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x380148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x38014c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38014cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380150: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x380150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380154: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x380154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x380158: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x380158u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38015c: 0xc0ded4a  jal         func_37B528
    ctx->pc = 0x38015Cu;
    SET_GPR_U32(ctx, 31, 0x380164u);
    ctx->pc = 0x380160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38015Cu;
    // 0x380160: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B528u, 0x38015Cu, 0x380164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380164u;
label_380164:
    // 0x380164: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x380164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x380168: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x380168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x38016c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38016cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x380170: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x380170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x380174: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x380174u;
    {
        const bool branch_taken_0x380174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x380178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380174u;
        // 0x380178: 0x26250004  addiu       $a1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380174) {
            ctx->pc = 0x3801A0u;
            goto label_3801a0;
        }
    }
    ctx->pc = 0x38017Cu;
    // 0x38017c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x38017cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x380180: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x380180u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x380184: 0x0  nop
    ctx->pc = 0x380184u;
    // NOP
label_380188:
    // 0x380188: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x380188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38018c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x38018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x380190: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x380190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x380194: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x380194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x380198: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x380198u;
    {
        const bool branch_taken_0x380198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x38019Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380198u;
        // 0x38019c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380198) {
            ctx->pc = 0x380188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_380188;
        }
    }
    ctx->pc = 0x3801A0u;
label_3801a0:
    // 0x3801a0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3801a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3801a4: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x3801A4u;
    SET_GPR_U32(ctx, 31, 0x3801ACu);
    ctx->pc = 0x3801A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3801A4u;
    // 0x3801a8: 0x420c0  sll         $a0, $a0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x3801A4u, 0x3801ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3801ACu;
label_3801ac:
    // 0x3801ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3801acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3801b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3801b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3801b4: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x3801B4u;
    {
        const bool branch_taken_0x3801b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3801B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3801B4u;
        // 0x3801b8: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3801b4) {
            ctx->pc = 0x380204u;
            goto label_380204;
        }
    }
    ctx->pc = 0x3801BCu;
    // 0x3801bc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3801bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3801c0:
    // 0x3801c0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3801c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3801c4: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x3801c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x3801c8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x3801c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3801cc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3801ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x3801d0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x3801d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3801d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3801d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x3801d8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3801d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3801dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3801dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3801e0: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x3801e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x3801e4: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x3801e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x3801e8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3801e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3801ec: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x3801ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3801f0: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x3801f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x3801f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3801f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3801f8: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x3801f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3801fc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x3801FCu;
    {
        const bool branch_taken_0x3801fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x380200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3801FCu;
        // 0x380200: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3801fc) {
            ctx->pc = 0x3801C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3801c0;
        }
    }
    ctx->pc = 0x380204u;
label_380204:
    // 0x380204: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x380204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380208: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380208u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x38020c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38020cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x380210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380214: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x380214u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_380218:
    // 0x380218: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38021c: 0x3e00008  jr          $ra
    ctx->pc = 0x38021Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38021Cu;
        // 0x380220: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38021Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x380224u;
    // 0x380224: 0x0  nop
    ctx->pc = 0x380224u;
    // NOP
    ctx->pc = 0x380228u;
}
