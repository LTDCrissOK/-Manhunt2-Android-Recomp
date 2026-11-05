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

// Function: sub_003ABC88
// Address: 0x3abc88 - 0x3abdd8
void sub_003ABC88_0x3abc88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ABC88_0x3abc88");
#endif

    switch (ctx->pc) {
        case 0x3abc88u: goto label_3abc88;
        case 0x3abc8cu: goto label_3abc8c;
        case 0x3abc90u: goto label_3abc90;
        case 0x3abc94u: goto label_3abc94;
        case 0x3abc98u: goto label_3abc98;
        case 0x3abc9cu: goto label_3abc9c;
        case 0x3abca0u: goto label_3abca0;
        case 0x3abca4u: goto label_3abca4;
        case 0x3abca8u: goto label_3abca8;
        case 0x3abcacu: goto label_3abcac;
        case 0x3abcb0u: goto label_3abcb0;
        case 0x3abcb4u: goto label_3abcb4;
        case 0x3abcb8u: goto label_3abcb8;
        case 0x3abcbcu: goto label_3abcbc;
        case 0x3abcc0u: goto label_3abcc0;
        case 0x3abcc4u: goto label_3abcc4;
        case 0x3abcc8u: goto label_3abcc8;
        case 0x3abcccu: goto label_3abccc;
        case 0x3abcd0u: goto label_3abcd0;
        case 0x3abcd4u: goto label_3abcd4;
        case 0x3abcd8u: goto label_3abcd8;
        case 0x3abcdcu: goto label_3abcdc;
        case 0x3abce0u: goto label_3abce0;
        case 0x3abce4u: goto label_3abce4;
        case 0x3abce8u: goto label_3abce8;
        case 0x3abcecu: goto label_3abcec;
        case 0x3abcf0u: goto label_3abcf0;
        case 0x3abcf4u: goto label_3abcf4;
        case 0x3abcf8u: goto label_3abcf8;
        case 0x3abcfcu: goto label_3abcfc;
        case 0x3abd00u: goto label_3abd00;
        case 0x3abd04u: goto label_3abd04;
        case 0x3abd08u: goto label_3abd08;
        case 0x3abd0cu: goto label_3abd0c;
        case 0x3abd10u: goto label_3abd10;
        case 0x3abd14u: goto label_3abd14;
        case 0x3abd18u: goto label_3abd18;
        case 0x3abd1cu: goto label_3abd1c;
        case 0x3abd20u: goto label_3abd20;
        case 0x3abd24u: goto label_3abd24;
        case 0x3abd28u: goto label_3abd28;
        case 0x3abd2cu: goto label_3abd2c;
        case 0x3abd30u: goto label_3abd30;
        case 0x3abd34u: goto label_3abd34;
        case 0x3abd38u: goto label_3abd38;
        case 0x3abd3cu: goto label_3abd3c;
        case 0x3abd40u: goto label_3abd40;
        case 0x3abd44u: goto label_3abd44;
        case 0x3abd48u: goto label_3abd48;
        case 0x3abd4cu: goto label_3abd4c;
        case 0x3abd50u: goto label_3abd50;
        case 0x3abd54u: goto label_3abd54;
        case 0x3abd58u: goto label_3abd58;
        case 0x3abd5cu: goto label_3abd5c;
        case 0x3abd60u: goto label_3abd60;
        case 0x3abd64u: goto label_3abd64;
        case 0x3abd68u: goto label_3abd68;
        case 0x3abd6cu: goto label_3abd6c;
        case 0x3abd70u: goto label_3abd70;
        case 0x3abd74u: goto label_3abd74;
        case 0x3abd78u: goto label_3abd78;
        case 0x3abd7cu: goto label_3abd7c;
        case 0x3abd80u: goto label_3abd80;
        case 0x3abd84u: goto label_3abd84;
        case 0x3abd88u: goto label_3abd88;
        case 0x3abd8cu: goto label_3abd8c;
        case 0x3abd90u: goto label_3abd90;
        case 0x3abd94u: goto label_3abd94;
        case 0x3abd98u: goto label_3abd98;
        case 0x3abd9cu: goto label_3abd9c;
        case 0x3abda0u: goto label_3abda0;
        case 0x3abda4u: goto label_3abda4;
        case 0x3abda8u: goto label_3abda8;
        case 0x3abdacu: goto label_3abdac;
        case 0x3abdb0u: goto label_3abdb0;
        case 0x3abdb4u: goto label_3abdb4;
        case 0x3abdb8u: goto label_3abdb8;
        case 0x3abdbcu: goto label_3abdbc;
        case 0x3abdc0u: goto label_3abdc0;
        case 0x3abdc4u: goto label_3abdc4;
        case 0x3abdc8u: goto label_3abdc8;
        case 0x3abdccu: goto label_3abdcc;
        case 0x3abdd0u: goto label_3abdd0;
        case 0x3abdd4u: goto label_3abdd4;
        default: break;
    }

    ctx->pc = 0x3abc88u;

label_3abc88:
    // 0x3abc88: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3abc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3abc8c:
    // 0x3abc8c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3abc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3abc90:
    // 0x3abc90: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x3abc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3abc94:
    // 0x3abc94: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3abc94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3abc98:
    // 0x3abc98: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3abc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3abc9c:
    // 0x3abc9c: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_3abca0:
    if (ctx->pc == 0x3ABCA0u) {
        ctx->pc = 0x3ABCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC9Cu;
        // 0x3abca0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCA4u;
        goto label_3abca4;
    }
    ctx->pc = 0x3ABC9Cu;
    {
        const bool branch_taken_0x3abc9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABC9Cu;
        // 0x3abca0: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abc9c) {
            ctx->pc = 0x3ABCC0u;
            goto label_3abcc0;
        }
    }
    ctx->pc = 0x3ABCA4u;
label_3abca4:
    // 0x3abca4: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abca8:
    // 0x3abca8: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abcac:
    // 0x3abcac: 0x2484f168  addiu       $a0, $a0, -0xE98
    ctx->pc = 0x3abcacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963560));
label_3abcb0:
    // 0x3abcb0: 0xc0ead68  jal         func_3AB5A0
label_3abcb4:
    if (ctx->pc == 0x3ABCB4u) {
        ctx->pc = 0x3ABCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCB0u;
        // 0x3abcb4: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCB8u;
        goto label_3abcb8;
    }
    ctx->pc = 0x3ABCB0u;
    SET_GPR_U32(ctx, 31, 0x3ABCB8u);
    ctx->pc = 0x3ABCB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCB0u;
    // 0x3abcb4: 0x24a5f098  addiu       $a1, $a1, -0xF68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB5A0u, 0x3ABCB0u, 0x3ABCB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABCB8u;
label_3abcb8:
    // 0x3abcb8: 0x10000042  b           . + 4 + (0x42 << 2)
label_3abcbc:
    if (ctx->pc == 0x3ABCBCu) {
        ctx->pc = 0x3ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCB8u;
        // 0x3abcbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCC0u;
        goto label_3abcc0;
    }
    ctx->pc = 0x3ABCB8u;
    {
        const bool branch_taken_0x3abcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCB8u;
        // 0x3abcbc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcb8) {
            ctx->pc = 0x3ABDC4u;
            goto label_3abdc4;
        }
    }
    ctx->pc = 0x3ABCC0u;
label_3abcc0:
    // 0x3abcc0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x3abcc0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_3abcc4:
    // 0x3abcc4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_3abcc8:
    if (ctx->pc == 0x3ABCC8u) {
        ctx->pc = 0x3ABCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCC4u;
        // 0x3abcc8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCCCu;
        goto label_3abccc;
    }
    ctx->pc = 0x3ABCC4u;
    {
        const bool branch_taken_0x3abcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCC4u;
        // 0x3abcc8: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abcc4) {
            ctx->pc = 0x3ABCE8u;
            goto label_3abce8;
        }
    }
    ctx->pc = 0x3ABCCCu;
label_3abccc:
    // 0x3abccc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3abcccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_3abcd0:
    // 0x3abcd0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3abcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_3abcd4:
    // 0x3abcd4: 0x2484f178  addiu       $a0, $a0, -0xE88
    ctx->pc = 0x3abcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963576));
label_3abcd8:
    // 0x3abcd8: 0xc0ead68  jal         func_3AB5A0
label_3abcdc:
    if (ctx->pc == 0x3ABCDCu) {
        ctx->pc = 0x3ABCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCD8u;
        // 0x3abcdc: 0x24a5f0c8  addiu       $a1, $a1, -0xF38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCE0u;
        goto label_3abce0;
    }
    ctx->pc = 0x3ABCD8u;
    SET_GPR_U32(ctx, 31, 0x3ABCE0u);
    ctx->pc = 0x3ABCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABCD8u;
    // 0x3abcdc: 0x24a5f0c8  addiu       $a1, $a1, -0xF38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AB5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AB5A0u, 0x3ABCD8u, 0x3ABCE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABCE0u;
label_3abce0:
    // 0x3abce0: 0x10000038  b           . + 4 + (0x38 << 2)
label_3abce4:
    if (ctx->pc == 0x3ABCE4u) {
        ctx->pc = 0x3ABCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCE0u;
        // 0x3abce4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCE8u;
        goto label_3abce8;
    }
    ctx->pc = 0x3ABCE0u;
    {
        const bool branch_taken_0x3abce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCE0u;
        // 0x3abce4: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abce0) {
            ctx->pc = 0x3ABDC4u;
            goto label_3abdc4;
        }
    }
    ctx->pc = 0x3ABCE8u;
label_3abce8:
    // 0x3abce8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_3abcec:
    if (ctx->pc == 0x3ABCECu) {
        ctx->pc = 0x3ABCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCE8u;
        // 0x3abcec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCF0u;
        goto label_3abcf0;
    }
    ctx->pc = 0x3ABCE8u;
    {
        const bool branch_taken_0x3abce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3ABCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCE8u;
        // 0x3abcec: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abce8) {
            ctx->pc = 0x3ABD10u;
            goto label_3abd10;
        }
    }
    ctx->pc = 0x3ABCF0u;
label_3abcf0:
    // 0x3abcf0: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x3abcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_3abcf4:
    // 0x3abcf4: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
label_3abcf8:
    if (ctx->pc == 0x3ABCF8u) {
        ctx->pc = 0x3ABCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABCF4u;
        // 0x3abcf8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABCFCu;
        goto label_3abcfc;
    }
    ctx->pc = 0x3ABCF4u;
    {
        const bool branch_taken_0x3abcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3abcf4) {
            ctx->pc = 0x3ABCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABCF4u;
            // 0x3abcf8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABDBCu;
            goto label_3abdbc;
        }
    }
    ctx->pc = 0x3ABCFCu;
label_3abcfc:
    // 0x3abcfc: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x3abcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_3abd00:
    // 0x3abd00: 0x40f809  jalr        $v0
label_3abd04:
    if (ctx->pc == 0x3ABD04u) {
        ctx->pc = 0x3ABD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD00u;
        // 0x3abd04: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD08u;
        goto label_3abd08;
    }
    ctx->pc = 0x3ABD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3ABD08u);
        ctx->pc = 0x3ABD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD00u;
        // 0x3abd04: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABD00u, 0x3ABD08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3ABD08u;
label_3abd08:
    // 0x3abd08: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3abd0c:
    if (ctx->pc == 0x3ABD0Cu) {
        ctx->pc = 0x3ABD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD08u;
        // 0x3abd0c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD10u;
        goto label_3abd10;
    }
    ctx->pc = 0x3ABD08u;
    {
        const bool branch_taken_0x3abd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD08u;
        // 0x3abd0c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd08) {
            ctx->pc = 0x3ABDBCu;
            goto label_3abdbc;
        }
    }
    ctx->pc = 0x3ABD10u;
label_3abd10:
    // 0x3abd10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x3abd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_3abd14:
    // 0x3abd14: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x3abd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
label_3abd18:
    // 0x3abd18: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x3abd18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3abd1c:
    // 0x3abd1c: 0x10e00026  beqz        $a3, . + 4 + (0x26 << 2)
label_3abd20:
    if (ctx->pc == 0x3ABD20u) {
        ctx->pc = 0x3ABD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD1Cu;
        // 0x3abd20: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD24u;
        goto label_3abd24;
    }
    ctx->pc = 0x3ABD1Cu;
    {
        const bool branch_taken_0x3abd1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD1Cu;
        // 0x3abd20: 0x24f20008  addiu       $s2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd1c) {
            ctx->pc = 0x3ABDB8u;
            goto label_3abdb8;
        }
    }
    ctx->pc = 0x3ABD24u;
label_3abd24:
    // 0x3abd24: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x3abd24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3abd28:
    // 0x3abd28: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x3abd28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3abd2c:
    // 0x3abd2c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3abd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abd30:
    // 0x3abd30: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3abd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abd34:
    // 0x3abd34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x3abd34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3abd38:
    // 0x3abd38: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x3abd38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3abd3c:
    // 0x3abd3c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_3abd40:
    if (ctx->pc == 0x3ABD40u) {
        ctx->pc = 0x3ABD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD3Cu;
        // 0x3abd40: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD44u;
        goto label_3abd44;
    }
    ctx->pc = 0x3ABD3Cu;
    {
        const bool branch_taken_0x3abd3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3abd3c) {
            ctx->pc = 0x3ABD40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABD3Cu;
            // 0x3abd40: 0x80830005  lb          $v1, 0x5($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABD70u;
            goto label_3abd70;
        }
    }
    ctx->pc = 0x3ABD44u;
label_3abd44:
    // 0x3abd44: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x3abd44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3abd48:
    // 0x3abd48: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3abd48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3abd4c:
    // 0x3abd4c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3abd4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3abd50:
    // 0x3abd50: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x3abd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abd54:
    // 0x3abd54: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x3abd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abd58:
    // 0x3abd58: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3abd58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_3abd5c:
    // 0x3abd5c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x3abd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_3abd60:
    // 0x3abd60: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3abd60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_3abd64:
    // 0x3abd64: 0x10000016  b           . + 4 + (0x16 << 2)
label_3abd68:
    if (ctx->pc == 0x3ABD68u) {
        ctx->pc = 0x3ABD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD64u;
        // 0x3abd68: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD6Cu;
        goto label_3abd6c;
    }
    ctx->pc = 0x3ABD64u;
    {
        const bool branch_taken_0x3abd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD64u;
        // 0x3abd68: 0xac870014  sw          $a3, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abd64) {
            ctx->pc = 0x3ABDC0u;
            goto label_3abdc0;
        }
    }
    ctx->pc = 0x3ABD6Cu;
label_3abd6c:
    // 0x3abd6c: 0x0  nop
    ctx->pc = 0x3abd6cu;
    // NOP
label_3abd70:
    // 0x3abd70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3abd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3abd74:
    // 0x3abd74: 0x54620011  bnel        $v1, $v0, . + 4 + (0x11 << 2)
label_3abd78:
    if (ctx->pc == 0x3ABD78u) {
        ctx->pc = 0x3ABD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD74u;
        // 0x3abd78: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD7Cu;
        goto label_3abd7c;
    }
    ctx->pc = 0x3ABD74u;
    {
        const bool branch_taken_0x3abd74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3abd74) {
            ctx->pc = 0x3ABD78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3ABD74u;
            // 0x3abd78: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3ABDBCu;
            goto label_3abdbc;
        }
    }
    ctx->pc = 0x3ABD7Cu;
label_3abd7c:
    // 0x3abd7c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3abd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3abd80:
    // 0x3abd80: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x3abd80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3abd84:
    // 0x3abd84: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3abd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3abd88:
    // 0x3abd88: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x3abd88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3abd8c:
    // 0x3abd8c: 0xc0eb07e  jal         func_3AC1F8
label_3abd90:
    if (ctx->pc == 0x3ABD90u) {
        ctx->pc = 0x3ABD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABD8Cu;
        // 0x3abd90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABD94u;
        goto label_3abd94;
    }
    ctx->pc = 0x3ABD8Cu;
    SET_GPR_U32(ctx, 31, 0x3ABD94u);
    ctx->pc = 0x3ABD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3ABD8Cu;
    // 0x3abd90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x3ABD8Cu, 0x3ABD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3ABD94u;
label_3abd94:
    // 0x3abd94: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3abd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3abd98:
    // 0x3abd98: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3abd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3abd9c:
    // 0x3abd9c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x3abd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abda0:
    // 0x3abda0: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x3abda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abda4:
    // 0x3abda4: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x3abda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3abda8:
    // 0x3abda8: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x3abda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3abdac:
    // 0x3abdac: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x3abdacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3abdb0:
    // 0x3abdb0: 0x10000003  b           . + 4 + (0x3 << 2)
label_3abdb4:
    if (ctx->pc == 0x3ABDB4u) {
        ctx->pc = 0x3ABDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDB0u;
        // 0x3abdb4: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDB8u;
        goto label_3abdb8;
    }
    ctx->pc = 0x3ABDB0u;
    {
        const bool branch_taken_0x3abdb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ABDB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDB0u;
        // 0x3abdb4: 0xb6460000  sdr         $a2, 0x0($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3abdb0) {
            ctx->pc = 0x3ABDC0u;
            goto label_3abdc0;
        }
    }
    ctx->pc = 0x3ABDB8u;
label_3abdb8:
    // 0x3abdb8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x3abdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_3abdbc:
    // 0x3abdbc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x3abdbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_3abdc0:
    // 0x3abdc0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3abdc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3abdc4:
    // 0x3abdc4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3abdc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3abdc8:
    // 0x3abdc8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3abdc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3abdcc:
    // 0x3abdcc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x3abdccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3abdd0:
    // 0x3abdd0: 0x3e00008  jr          $ra
label_3abdd4:
    if (ctx->pc == 0x3ABDD4u) {
        ctx->pc = 0x3ABDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDD0u;
        // 0x3abdd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3ABDD8u;
        goto label_fallthrough_0x3abdd0;
    }
    ctx->pc = 0x3ABDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ABDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ABDD0u;
        // 0x3abdd4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ABDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3abdd0:
    ctx->pc = 0x3ABDD8u;
}
