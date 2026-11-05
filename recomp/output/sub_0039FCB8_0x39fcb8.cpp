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

// Function: sub_0039FCB8
// Address: 0x39fcb8 - 0x39fdb8
void sub_0039FCB8_0x39fcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FCB8_0x39fcb8");
#endif

    switch (ctx->pc) {
        case 0x39fcb8u: goto label_39fcb8;
        case 0x39fcbcu: goto label_39fcbc;
        case 0x39fcc0u: goto label_39fcc0;
        case 0x39fcc4u: goto label_39fcc4;
        case 0x39fcc8u: goto label_39fcc8;
        case 0x39fcccu: goto label_39fccc;
        case 0x39fcd0u: goto label_39fcd0;
        case 0x39fcd4u: goto label_39fcd4;
        case 0x39fcd8u: goto label_39fcd8;
        case 0x39fcdcu: goto label_39fcdc;
        case 0x39fce0u: goto label_39fce0;
        case 0x39fce4u: goto label_39fce4;
        case 0x39fce8u: goto label_39fce8;
        case 0x39fcecu: goto label_39fcec;
        case 0x39fcf0u: goto label_39fcf0;
        case 0x39fcf4u: goto label_39fcf4;
        case 0x39fcf8u: goto label_39fcf8;
        case 0x39fcfcu: goto label_39fcfc;
        case 0x39fd00u: goto label_39fd00;
        case 0x39fd04u: goto label_39fd04;
        case 0x39fd08u: goto label_39fd08;
        case 0x39fd0cu: goto label_39fd0c;
        case 0x39fd10u: goto label_39fd10;
        case 0x39fd14u: goto label_39fd14;
        case 0x39fd18u: goto label_39fd18;
        case 0x39fd1cu: goto label_39fd1c;
        case 0x39fd20u: goto label_39fd20;
        case 0x39fd24u: goto label_39fd24;
        case 0x39fd28u: goto label_39fd28;
        case 0x39fd2cu: goto label_39fd2c;
        case 0x39fd30u: goto label_39fd30;
        case 0x39fd34u: goto label_39fd34;
        case 0x39fd38u: goto label_39fd38;
        case 0x39fd3cu: goto label_39fd3c;
        case 0x39fd40u: goto label_39fd40;
        case 0x39fd44u: goto label_39fd44;
        case 0x39fd48u: goto label_39fd48;
        case 0x39fd4cu: goto label_39fd4c;
        case 0x39fd50u: goto label_39fd50;
        case 0x39fd54u: goto label_39fd54;
        case 0x39fd58u: goto label_39fd58;
        case 0x39fd5cu: goto label_39fd5c;
        case 0x39fd60u: goto label_39fd60;
        case 0x39fd64u: goto label_39fd64;
        case 0x39fd68u: goto label_39fd68;
        case 0x39fd6cu: goto label_39fd6c;
        case 0x39fd70u: goto label_39fd70;
        case 0x39fd74u: goto label_39fd74;
        case 0x39fd78u: goto label_39fd78;
        case 0x39fd7cu: goto label_39fd7c;
        case 0x39fd80u: goto label_39fd80;
        case 0x39fd84u: goto label_39fd84;
        case 0x39fd88u: goto label_39fd88;
        case 0x39fd8cu: goto label_39fd8c;
        case 0x39fd90u: goto label_39fd90;
        case 0x39fd94u: goto label_39fd94;
        case 0x39fd98u: goto label_39fd98;
        case 0x39fd9cu: goto label_39fd9c;
        case 0x39fda0u: goto label_39fda0;
        case 0x39fda4u: goto label_39fda4;
        case 0x39fda8u: goto label_39fda8;
        case 0x39fdacu: goto label_39fdac;
        case 0x39fdb0u: goto label_39fdb0;
        case 0x39fdb4u: goto label_39fdb4;
        default: break;
    }

    ctx->pc = 0x39fcb8u;

label_39fcb8:
    // 0x39fcb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39fcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_39fcbc:
    // 0x39fcbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39fcbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39fcc0:
    // 0x39fcc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39fcc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39fcc4:
    // 0x39fcc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39fcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39fcc8:
    // 0x39fcc8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39fcc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39fccc:
    // 0x39fccc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39fcccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39fcd0:
    // 0x39fcd0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39fcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_39fcd4:
    // 0x39fcd4: 0xc0e6660  jal         func_399980
label_39fcd8:
    if (ctx->pc == 0x39FCD8u) {
        ctx->pc = 0x39FCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCD4u;
        // 0x39fcd8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCDCu;
        goto label_39fcdc;
    }
    ctx->pc = 0x39FCD4u;
    SET_GPR_U32(ctx, 31, 0x39FCDCu);
    ctx->pc = 0x39FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FCD4u;
    // 0x39fcd8: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399980u, 0x39FCD4u, 0x39FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FCDCu;
label_39fcdc:
    // 0x39fcdc: 0x8e040090  lw          $a0, 0x90($s0)
    ctx->pc = 0x39fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_39fce0:
    // 0x39fce0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39fce4:
    // 0x39fce4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x39fce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_39fce8:
    // 0x39fce8: 0x40f809  jalr        $v0
label_39fcec:
    if (ctx->pc == 0x39FCECu) {
        ctx->pc = 0x39FCF0u;
        goto label_39fcf0;
    }
    ctx->pc = 0x39FCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39FCF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FCE8u, 0x39FCF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FCF0u;
label_39fcf0:
    // 0x39fcf0: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x39fcf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_39fcf4:
    // 0x39fcf4: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
label_39fcf8:
    if (ctx->pc == 0x39FCF8u) {
        ctx->pc = 0x39FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FCF4u;
        // 0x39fcf8: 0x9e0801dc  lwu         $t0, 0x1DC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 476)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FCFCu;
        goto label_39fcfc;
    }
    ctx->pc = 0x39FCF4u;
    {
        const bool branch_taken_0x39fcf4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x39fcf4) {
            ctx->pc = 0x39FCF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FCF4u;
            // 0x39fcf8: 0x9e0801dc  lwu         $t0, 0x1DC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 476)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FD30u;
            goto label_39fd30;
        }
    }
    ctx->pc = 0x39FCFCu;
label_39fcfc:
    // 0x39fcfc: 0x26110094  addiu       $s1, $s0, 0x94
    ctx->pc = 0x39fcfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
label_39fd00:
    // 0x39fd00: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x39fd00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_39fd04:
    // 0x39fd04: 0x0  nop
    ctx->pc = 0x39fd04u;
    // NOP
label_39fd08:
    // 0x39fd08: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x39fd08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_39fd0c:
    // 0x39fd0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x39fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39fd10:
    // 0x39fd10: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x39fd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_39fd14:
    // 0x39fd14: 0x60f809  jalr        $v1
label_39fd18:
    if (ctx->pc == 0x39FD18u) {
        ctx->pc = 0x39FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD14u;
        // 0x39fd18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD1Cu;
        goto label_39fd1c;
    }
    ctx->pc = 0x39FD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x39FD1Cu);
        ctx->pc = 0x39FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD14u;
        // 0x39fd18: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FD14u, 0x39FD1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39FD1Cu;
label_39fd1c:
    // 0x39fd1c: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x39fd1cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_39fd20:
    // 0x39fd20: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x39fd20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39fd24:
    // 0x39fd24: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_39fd28:
    if (ctx->pc == 0x39FD28u) {
        ctx->pc = 0x39FD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD24u;
        // 0x39fd28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD2Cu;
        goto label_39fd2c;
    }
    ctx->pc = 0x39FD24u;
    {
        const bool branch_taken_0x39fd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39fd24) {
            ctx->pc = 0x39FD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39FD24u;
            // 0x39fd28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39FD08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39fd08;
        }
    }
    ctx->pc = 0x39FD2Cu;
label_39fd2c:
    // 0x39fd2c: 0x9e0801dc  lwu         $t0, 0x1DC($s0)
    ctx->pc = 0x39fd2cu;
    SET_GPR_ZE32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 16), 476)));
label_39fd30:
    // 0x39fd30: 0x8e0701d8  lw          $a3, 0x1D8($s0)
    ctx->pc = 0x39fd30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 472)));
label_39fd34:
    // 0x39fd34: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39fd34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39fd38:
    // 0x39fd38: 0x842f8  dsll        $t0, $t0, 11
    ctx->pc = 0x39fd38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 11);
label_39fd3c:
    // 0x39fd3c: 0x8e0501d0  lw          $a1, 0x1D0($s0)
    ctx->pc = 0x39fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_39fd40:
    // 0x39fd40: 0xc0e65f8  jal         func_3997E0
label_39fd44:
    if (ctx->pc == 0x39FD44u) {
        ctx->pc = 0x39FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD40u;
        // 0x39fd44: 0x8e0601d4  lw          $a2, 0x1D4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD48u;
        goto label_39fd48;
    }
    ctx->pc = 0x39FD40u;
    SET_GPR_U32(ctx, 31, 0x39FD48u);
    ctx->pc = 0x39FD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD40u;
    // 0x39fd44: 0x8e0601d4  lw          $a2, 0x1D4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 468)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3997E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3997E0u, 0x39FD40u, 0x39FD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD48u;
label_39fd48:
    // 0x39fd48: 0x8e050118  lw          $a1, 0x118($s0)
    ctx->pc = 0x39fd48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 280)));
label_39fd4c:
    // 0x39fd4c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39fd50:
    // 0x39fd50: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x39fd50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_39fd54:
    // 0x39fd54: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x39fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_39fd58:
    // 0x39fd58: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x39fd58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_39fd5c:
    // 0x39fd5c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x39fd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39fd60:
    // 0x39fd60: 0xc0e69c2  jal         func_39A708
label_39fd64:
    if (ctx->pc == 0x39FD64u) {
        ctx->pc = 0x39FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD60u;
        // 0x39fd64: 0x52843  sra         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD68u;
        goto label_39fd68;
    }
    ctx->pc = 0x39FD60u;
    SET_GPR_U32(ctx, 31, 0x39FD68u);
    ctx->pc = 0x39FD64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD60u;
    // 0x39fd64: 0x52843  sra         $a1, $a1, 1 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A708u, 0x39FD60u, 0x39FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD68u;
label_39fd68:
    // 0x39fd68: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39fd6c:
    // 0x39fd6c: 0xc0e66bc  jal         func_399AF0
label_39fd70:
    if (ctx->pc == 0x39FD70u) {
        ctx->pc = 0x39FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD6Cu;
        // 0x39fd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD74u;
        goto label_39fd74;
    }
    ctx->pc = 0x39FD6Cu;
    SET_GPR_U32(ctx, 31, 0x39FD74u);
    ctx->pc = 0x39FD70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD6Cu;
    // 0x39fd70: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39FD6Cu, 0x39FD74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD74u;
label_39fd74:
    // 0x39fd74: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_39fd78:
    // 0x39fd78: 0xc0e6798  jal         func_399E60
label_39fd7c:
    if (ctx->pc == 0x39FD7Cu) {
        ctx->pc = 0x39FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD78u;
        // 0x39fd7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD80u;
        goto label_39fd80;
    }
    ctx->pc = 0x39FD78u;
    SET_GPR_U32(ctx, 31, 0x39FD80u);
    ctx->pc = 0x39FD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD78u;
    // 0x39fd7c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39FD78u, 0x39FD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD80u;
label_39fd80:
    // 0x39fd80: 0xc0e66f8  jal         func_399BE0
label_39fd84:
    if (ctx->pc == 0x39FD84u) {
        ctx->pc = 0x39FD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD80u;
        // 0x39fd84: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD88u;
        goto label_39fd88;
    }
    ctx->pc = 0x39FD80u;
    SET_GPR_U32(ctx, 31, 0x39FD88u);
    ctx->pc = 0x39FD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD80u;
    // 0x39fd84: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399BE0u, 0x39FD80u, 0x39FD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD88u;
label_39fd88:
    // 0x39fd88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39fd8c:
    // 0x39fd8c: 0xc0e82f4  jal         func_3A0BD0
label_39fd90:
    if (ctx->pc == 0x39FD90u) {
        ctx->pc = 0x39FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FD8Cu;
        // 0x39fd90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FD94u;
        goto label_39fd94;
    }
    ctx->pc = 0x39FD8Cu;
    SET_GPR_U32(ctx, 31, 0x39FD94u);
    ctx->pc = 0x39FD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FD8Cu;
    // 0x39fd90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A0BD0u, 0x39FD8Cu, 0x39FD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FD94u;
label_39fd94:
    // 0x39fd94: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39fd94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_39fd98:
    // 0x39fd98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39fd98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39fd9c:
    // 0x39fd9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39fd9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39fda0:
    // 0x39fda0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39fda0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39fda4:
    // 0x39fda4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39fda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39fda8:
    // 0x39fda8: 0x80e82e2  j           func_3A0B88
label_39fdac:
    if (ctx->pc == 0x39FDACu) {
        ctx->pc = 0x39FDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FDA8u;
        // 0x39fdac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39FDB0u;
        goto label_39fdb0;
    }
    ctx->pc = 0x39FDA8u;
    ctx->pc = 0x39FDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FDA8u;
    // 0x39fdac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A0B88u;
    sub_003A0B88_0x3a0b88(rdram, ctx, runtime); return;
    ctx->pc = 0x39FDB0u;
label_39fdb0:
    // 0x39fdb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x39fdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39fdb4:
    // 0x39fdb4: 0x0  nop
    ctx->pc = 0x39fdb4u;
    // NOP
    ctx->pc = 0x39fdb8u;
}
