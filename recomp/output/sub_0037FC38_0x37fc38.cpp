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

// Function: sub_0037FC38
// Address: 0x37fc38 - 0x37fea8
void sub_0037FC38_0x37fc38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037FC38_0x37fc38");
#endif

    switch (ctx->pc) {
        case 0x37fc9cu: goto label_37fc9c;
        case 0x37fcb8u: goto label_37fcb8;
        case 0x37fcc4u: goto label_37fcc4;
        case 0x37fcd0u: goto label_37fcd0;
        case 0x37fcdcu: goto label_37fcdc;
        case 0x37fcf0u: goto label_37fcf0;
        case 0x37fd08u: goto label_37fd08;
        case 0x37fd18u: goto label_37fd18;
        case 0x37fd24u: goto label_37fd24;
        case 0x37fd48u: goto label_37fd48;
        case 0x37fd64u: goto label_37fd64;
        case 0x37fd70u: goto label_37fd70;
        case 0x37fd7cu: goto label_37fd7c;
        case 0x37fd8cu: goto label_37fd8c;
        case 0x37fd98u: goto label_37fd98;
        case 0x37fda4u: goto label_37fda4;
        case 0x37fdc8u: goto label_37fdc8;
        case 0x37fde0u: goto label_37fde0;
        case 0x37fdf8u: goto label_37fdf8;
        case 0x37fe2cu: goto label_37fe2c;
        case 0x37fe38u: goto label_37fe38;
        case 0x37fe58u: goto label_37fe58;
        case 0x37fe64u: goto label_37fe64;
        case 0x37fe78u: goto label_37fe78;
        case 0x37fea0u: goto label_37fea0;
        default: break;
    }

    ctx->pc = 0x37fc38u;

    // 0x37fc38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37fc38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x37fc3c: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x37fc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x37fc40: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x37fc40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x37fc44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x37fc44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fc48: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x37fc48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x37fc4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x37fc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x37fc50: 0x26820060  addiu       $v0, $s4, 0x60
    ctx->pc = 0x37fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 96));
    // 0x37fc54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x37fc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x37fc58: 0x24100400  addiu       $s0, $zero, 0x400
    ctx->pc = 0x37fc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x37fc5c: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x37fc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x37fc60: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x37fc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x37fc64: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x37fc64u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fc68: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x37fc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x37fc6c: 0x3c050300  lui         $a1, 0x300
    ctx->pc = 0x37fc6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)768 << 16));
    // 0x37fc70: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x37fc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x37fc74: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x37fc74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37fc78: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x37fc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x37fc7c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x37fc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x37fc80: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x37fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x37fc84: 0x8e820134  lw          $v0, 0x134($s4)
    ctx->pc = 0x37fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x37fc88: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x37fc88u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x37fc8c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x37fc8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x37fc90: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x37fc90u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x37fc94: 0xc0e0306  jal         func_380C18
    ctx->pc = 0x37FC94u;
    SET_GPR_U32(ctx, 31, 0x37FC9Cu);
    ctx->pc = 0x37FC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FC94u;
    // 0x37fc98: 0x2063025  or          $a2, $s0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380C18u, 0x37FC94u, 0x37FC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FC9Cu;
label_37fc9c:
    // 0x37fc9c: 0x8e830134  lw          $v1, 0x134($s4)
    ctx->pc = 0x37fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
    // 0x37fca0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x37fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x37fca4: 0xae90013c  sw          $s0, 0x13C($s4)
    ctx->pc = 0x37fca4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 316), GPR_U32(ctx, 16));
    // 0x37fca8: 0x24527bd8  addiu       $s2, $v0, 0x7BD8
    ctx->pc = 0x37fca8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 31704));
    // 0x37fcac: 0xae830138  sw          $v1, 0x138($s4)
    ctx->pc = 0x37fcacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 3));
    // 0x37fcb0: 0x26900064  addiu       $s0, $s4, 0x64
    ctx->pc = 0x37fcb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 100));
    // 0x37fcb4: 0x0  nop
    ctx->pc = 0x37fcb4u;
    // NOP
label_37fcb8:
    // 0x37fcb8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x37fcb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fcbc: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37FCBCu;
    SET_GPR_U32(ctx, 31, 0x37FCC4u);
    ctx->pc = 0x37FCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FCBCu;
    // 0x37fcc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37FCBCu, 0x37FCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FCC4u;
label_37fcc4:
    // 0x37fcc4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x37fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x37fcc8: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37FCC8u;
    SET_GPR_U32(ctx, 31, 0x37FCD0u);
    ctx->pc = 0x37FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FCC8u;
    // 0x37fccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37FCC8u, 0x37FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FCD0u;
label_37fcd0:
    // 0x37fcd0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x37fcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x37fcd4: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37FCD4u;
    SET_GPR_U32(ctx, 31, 0x37FCDCu);
    ctx->pc = 0x37FCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FCD4u;
    // 0x37fcd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37FCD4u, 0x37FCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FCDCu;
label_37fcdc:
    // 0x37fcdc: 0xae02fffc  sw          $v0, -0x4($s0)
    ctx->pc = 0x37fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967292), GPR_U32(ctx, 2));
    // 0x37fce0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x37fce0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x37fce4: 0x621fff4  bgez        $s1, . + 4 + (-0xC << 2)
    ctx->pc = 0x37FCE4u;
    {
        const bool branch_taken_0x37fce4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x37FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FCE4u;
        // 0x37fce8: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fce4) {
            ctx->pc = 0x37FCB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37fcb8;
        }
    }
    ctx->pc = 0x37FCECu;
    // 0x37fcec: 0x268200b0  addiu       $v0, $s4, 0xB0
    ctx->pc = 0x37fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_37fcf0:
    // 0x37fcf0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x37fcf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x37fcf4: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x37fcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
    // 0x37fcf8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x37fcf8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fcfc: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x37fcfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37fd00: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x37FD00u;
    SET_GPR_U32(ctx, 31, 0x37FD08u);
    ctx->pc = 0x37FD04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD00u;
    // 0x37fd04: 0x2612ffff  addiu       $s2, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x37FD00u, 0x37FD08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD08u;
label_37fd08:
    // 0x37fd08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x37fd08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd0c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37FD0Cu;
    {
        const bool branch_taken_0x37fd0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD0Cu;
        // 0x37fd10: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd0c) {
            ctx->pc = 0x37FD30u;
            goto label_37fd30;
        }
    }
    ctx->pc = 0x37FD14u;
    // 0x37fd14: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x37fd14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_37fd18:
    // 0x37fd18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37fd18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd1c: 0xc0e023a  jal         func_3808E8
    ctx->pc = 0x37FD1Cu;
    SET_GPR_U32(ctx, 31, 0x37FD24u);
    ctx->pc = 0x37FD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD1Cu;
    // 0x37fd20: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3808E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3808E8u, 0x37FD1Cu, 0x37FD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD24u;
label_37fd24:
    // 0x37fd24: 0x0  nop
    ctx->pc = 0x37fd24u;
    // NOP
    // 0x37fd28: 0x1650fffb  bne         $s2, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x37FD28u;
    {
        const bool branch_taken_0x37fd28 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 16));
        ctx->pc = 0x37FD2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD28u;
        // 0x37fd2c: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd28) {
            ctx->pc = 0x37FD18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37fd18;
        }
    }
    ctx->pc = 0x37FD30u;
label_37fd30:
    // 0x37fd30: 0xae9300a0  sw          $s3, 0xA0($s4)
    ctx->pc = 0x37fd30u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 160), GPR_U32(ctx, 19));
    // 0x37fd34: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x37fd34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd38: 0x8ed00064  lw          $s0, 0x64($s6)
    ctx->pc = 0x37fd38u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x37fd3c: 0x12150038  beq         $s0, $s5, . + 4 + (0x38 << 2)
    ctx->pc = 0x37FD3Cu;
    {
        const bool branch_taken_0x37fd3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x37FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD3Cu;
        // 0x37fd40: 0x8fb10000  lw          $s1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd3c) {
            ctx->pc = 0x37FE20u;
            goto label_37fe20;
        }
    }
    ctx->pc = 0x37FD44u;
    // 0x37fd44: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x37fd44u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37fd48:
    // 0x37fd48: 0x8ec20064  lw          $v0, 0x64($s6)
    ctx->pc = 0x37fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 100)));
    // 0x37fd4c: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x37FD4Cu;
    {
        const bool branch_taken_0x37fd4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x37fd4c) {
            ctx->pc = 0x37FD84u;
            goto label_37fd84;
        }
    }
    ctx->pc = 0x37FD54u;
    // 0x37fd54: 0x57c00014  bnel        $fp, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x37FD54u;
    {
        const bool branch_taken_0x37fd54 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x37fd54) {
            ctx->pc = 0x37FD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FD54u;
            // 0x37fd58: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FDA8u;
            goto label_37fda8;
        }
    }
    ctx->pc = 0x37FD5Cu;
    // 0x37fd5c: 0xc0dedae  jal         func_37B6B8
    ctx->pc = 0x37FD5Cu;
    SET_GPR_U32(ctx, 31, 0x37FD64u);
    ctx->pc = 0x37FD60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD5Cu;
    // 0x37fd60: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6B8u, 0x37FD5Cu, 0x37FD64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD64u;
label_37fd64:
    // 0x37fd64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37fd64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd68: 0xc0e0298  jal         func_380A60
    ctx->pc = 0x37FD68u;
    SET_GPR_U32(ctx, 31, 0x37FD70u);
    ctx->pc = 0x37FD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD68u;
    // 0x37fd6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A60u, 0x37FD68u, 0x37FD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD70u;
label_37fd70:
    // 0x37fd70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37fd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd74: 0xc0e02ec  jal         func_380BB0
    ctx->pc = 0x37FD74u;
    SET_GPR_U32(ctx, 31, 0x37FD7Cu);
    ctx->pc = 0x37FD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD74u;
    // 0x37fd78: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380BB0u, 0x37FD74u, 0x37FD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD7Cu;
label_37fd7c:
    // 0x37fd7c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x37FD7Cu;
    {
        const bool branch_taken_0x37fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FD7Cu;
        // 0x37fd80: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fd7c) {
            ctx->pc = 0x37FDA8u;
            goto label_37fda8;
        }
    }
    ctx->pc = 0x37FD84u;
label_37fd84:
    // 0x37fd84: 0xc0dedae  jal         func_37B6B8
    ctx->pc = 0x37FD84u;
    SET_GPR_U32(ctx, 31, 0x37FD8Cu);
    ctx->pc = 0x37FD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD84u;
    // 0x37fd88: 0x8e040030  lw          $a0, 0x30($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B6B8u, 0x37FD84u, 0x37FD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD8Cu;
label_37fd8c:
    // 0x37fd8c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x37fd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd90: 0xc0e0298  jal         func_380A60
    ctx->pc = 0x37FD90u;
    SET_GPR_U32(ctx, 31, 0x37FD98u);
    ctx->pc = 0x37FD94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD90u;
    // 0x37fd94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380A60u, 0x37FD90u, 0x37FD98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FD98u;
label_37fd98:
    // 0x37fd98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37fd98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fd9c: 0xc0e02ec  jal         func_380BB0
    ctx->pc = 0x37FD9Cu;
    SET_GPR_U32(ctx, 31, 0x37FDA4u);
    ctx->pc = 0x37FDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FD9Cu;
    // 0x37fda0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380BB0u, 0x37FD9Cu, 0x37FDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDA4u;
label_37fda4:
    // 0x37fda4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x37fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_37fda8:
    // 0x37fda8: 0x54570018  bnel        $v0, $s7, . + 4 + (0x18 << 2)
    ctx->pc = 0x37FDA8u;
    {
        const bool branch_taken_0x37fda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x37fda8) {
            ctx->pc = 0x37FDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37FDA8u;
            // 0x37fdac: 0x8e100064  lw          $s0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FE0Cu;
            goto label_37fe0c;
        }
    }
    ctx->pc = 0x37FDB0u;
    // 0x37fdb0: 0x8e05003c  lw          $a1, 0x3C($s0)
    ctx->pc = 0x37fdb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x37fdb4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x37fdb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37fdb8: 0x10b20004  beq         $a1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FDB8u;
    {
        const bool branch_taken_0x37fdb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x37FDBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDB8u;
        // 0x37fdbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fdb8) {
            ctx->pc = 0x37FDCCu;
            goto label_37fdcc;
        }
    }
    ctx->pc = 0x37FDC0u;
    // 0x37fdc0: 0xc0dffaa  jal         func_37FEA8
    ctx->pc = 0x37FDC0u;
    SET_GPR_U32(ctx, 31, 0x37FDC8u);
    ctx->pc = 0x37FDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDC0u;
    // 0x37fdc4: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FEA8u, 0x37FDC0u, 0x37FDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDC8u;
label_37fdc8:
    // 0x37fdc8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x37fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_37fdcc:
    // 0x37fdcc: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x37fdccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x37fdd0: 0x10b20004  beq         $a1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FDD0u;
    {
        const bool branch_taken_0x37fdd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x37FDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDD0u;
        // 0x37fdd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fdd0) {
            ctx->pc = 0x37FDE4u;
            goto label_37fde4;
        }
    }
    ctx->pc = 0x37FDD8u;
    // 0x37fdd8: 0xc0dffaa  jal         func_37FEA8
    ctx->pc = 0x37FDD8u;
    SET_GPR_U32(ctx, 31, 0x37FDE0u);
    ctx->pc = 0x37FDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDD8u;
    // 0x37fddc: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FEA8u, 0x37FDD8u, 0x37FDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDE0u;
label_37fde0:
    // 0x37fde0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x37fde0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_37fde4:
    // 0x37fde4: 0x8e050044  lw          $a1, 0x44($s0)
    ctx->pc = 0x37fde4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x37fde8: 0x10b20004  beq         $a1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x37FDE8u;
    {
        const bool branch_taken_0x37fde8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 18));
        ctx->pc = 0x37FDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FDE8u;
        // 0x37fdec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fde8) {
            ctx->pc = 0x37FDFCu;
            goto label_37fdfc;
        }
    }
    ctx->pc = 0x37FDF0u;
    // 0x37fdf0: 0xc0dffaa  jal         func_37FEA8
    ctx->pc = 0x37FDF0u;
    SET_GPR_U32(ctx, 31, 0x37FDF8u);
    ctx->pc = 0x37FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FDF0u;
    // 0x37fdf4: 0x26260004  addiu       $a2, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FEA8u, 0x37FDF0u, 0x37FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FDF8u;
label_37fdf8:
    // 0x37fdf8: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x37fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_37fdfc:
    // 0x37fdfc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x37fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x37fe00: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x37fe00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x37fe04: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x37fe04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x37fe08: 0x8e100064  lw          $s0, 0x64($s0)
    ctx->pc = 0x37fe08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_37fe0c:
    // 0x37fe0c: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x37fe0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe10: 0x2151026  xor         $v0, $s0, $s5
    ctx->pc = 0x37fe10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 21));
    // 0x37fe14: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x37fe14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x37fe18: 0x1060ffcb  beqz        $v1, . + 4 + (-0x35 << 2)
    ctx->pc = 0x37FE18u;
    {
        const bool branch_taken_0x37fe18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37FE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FE18u;
        // 0x37fe1c: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37fe18) {
            ctx->pc = 0x37FD48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37fd48;
        }
    }
    ctx->pc = 0x37FE20u;
label_37fe20:
    // 0x37fe20: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x37fe20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x37fe24: 0xc0dde5c  jal         func_377970
    ctx->pc = 0x37FE24u;
    SET_GPR_U32(ctx, 31, 0x37FE2Cu);
    ctx->pc = 0x37FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FE24u;
    // 0x37fe28: 0x248452c0  addiu       $a0, $a0, 0x52C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377970u, 0x37FE24u, 0x37FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE2Cu;
label_37fe2c:
    // 0x37fe2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x37fe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe30: 0xc0e0304  jal         func_380C10
    ctx->pc = 0x37FE30u;
    SET_GPR_U32(ctx, 31, 0x37FE38u);
    ctx->pc = 0x37FE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FE30u;
    // 0x37fe34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380C10u, 0x37FE30u, 0x37FE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE38u;
label_37fe38:
    // 0x37fe38: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x37fe38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37fe3c: 0x3c086c04  lui         $t0, 0x6C04
    ctx->pc = 0x37fe3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)27652 << 16));
    // 0x37fe40: 0x3c070100  lui         $a3, 0x100
    ctx->pc = 0x37fe40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)256 << 16));
    // 0x37fe44: 0x2084025  or          $t0, $s0, $t0
    ctx->pc = 0x37fe44u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16) | GPR_U64(ctx, 8));
    // 0x37fe48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x37fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe4c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x37fe4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37fe50: 0xc0e027e  jal         func_3809F8
    ctx->pc = 0x37FE50u;
    SET_GPR_U32(ctx, 31, 0x37FE58u);
    ctx->pc = 0x37FE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FE50u;
    // 0x37fe54: 0x34e70101  ori         $a3, $a3, 0x101 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809F8u, 0x37FE50u, 0x37FE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE58u;
label_37fe58:
    // 0x37fe58: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x37fe58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x37fe5c: 0xc0dde56  jal         func_377958
    ctx->pc = 0x37FE5Cu;
    SET_GPR_U32(ctx, 31, 0x37FE64u);
    ctx->pc = 0x37FE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FE5Cu;
    // 0x37fe60: 0x24847b50  addiu       $a0, $a0, 0x7B50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x377958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x377958u, 0x37FE5Cu, 0x37FE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE64u;
label_37fe64:
    // 0x37fe64: 0x3c061400  lui         $a2, 0x1400
    ctx->pc = 0x37fe64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5120 << 16));
    // 0x37fe68: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37fe68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37fe6c: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x37fe6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x37fe70: 0xc0e0314  jal         func_380C50
    ctx->pc = 0x37FE70u;
    SET_GPR_U32(ctx, 31, 0x37FE78u);
    ctx->pc = 0x37FE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37FE70u;
    // 0x37fe74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380C50u, 0x37FE70u, 0x37FE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37FE78u;
label_37fe78:
    // 0x37fe78: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x37fe78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37fe7c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x37fe7cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37fe80: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x37fe80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37fe84: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x37fe84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x37fe88: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x37fe88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37fe8c: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x37fe8cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x37fe90: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x37fe90u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37fe94: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x37fe94u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x37fe98: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x37fe98u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37fe9c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x37fe9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_37fea0:
    // 0x37fea0: 0x3e00008  jr          $ra
    ctx->pc = 0x37FEA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37FEA0u;
        // 0x37fea4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37FEA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37FEA8u;
}
