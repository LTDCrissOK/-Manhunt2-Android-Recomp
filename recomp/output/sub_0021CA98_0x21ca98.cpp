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

// Function: sub_0021CA98
// Address: 0x21ca98 - 0x21cc58
void sub_0021CA98_0x21ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CA98_0x21ca98");
#endif

    switch (ctx->pc) {
        case 0x21cba8u: goto label_21cba8;
        case 0x21cbbcu: goto label_21cbbc;
        case 0x21cbd0u: goto label_21cbd0;
        case 0x21cbe4u: goto label_21cbe4;
        case 0x21cbf4u: goto label_21cbf4;
        case 0x21cc00u: goto label_21cc00;
        case 0x21cc0cu: goto label_21cc0c;
        case 0x21cc20u: goto label_21cc20;
        default: break;
    }

    ctx->pc = 0x21ca98u;

    // 0x21ca98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21ca98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21ca9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21caa0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x21caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x21caa4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x21caa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x21caa8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x21caa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x21caac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x21caacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x21cab0: 0x14a20061  bne         $a1, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x21CAB0u;
    {
        const bool branch_taken_0x21cab0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x21CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB0u;
        // 0x21cab4: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cab0) {
            ctx->pc = 0x21CC38u;
            goto label_21cc38;
        }
    }
    ctx->pc = 0x21CAB8u;
    // 0x21cab8: 0x1080005f  beqz        $a0, . + 4 + (0x5F << 2)
    ctx->pc = 0x21CAB8u;
    {
        const bool branch_taken_0x21cab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CAB8u;
        // 0x21cabc: 0x3c05004a  lui         $a1, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cab8) {
            ctx->pc = 0x21CC38u;
            goto label_21cc38;
        }
    }
    ctx->pc = 0x21CAC0u;
    // 0x21cac0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cac4: 0xac8034c0  sw          $zero, 0x34C0($a0)
    ctx->pc = 0x21cac4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34C0u, _value); } while (0);
    // 0x21cac8: 0x248234c0  addiu       $v0, $a0, 0x34C0
    ctx->pc = 0x21cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13504));
    // 0x21cacc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x21caccu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34CCu, _value); } while (0);
    // 0x21cad0: 0x24a334d0  addiu       $v1, $a1, 0x34D0
    ctx->pc = 0x21cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 13520));
    // 0x21cad4: 0xaca034d0  sw          $zero, 0x34D0($a1)
    ctx->pc = 0x21cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 13520), GPR_U32(ctx, 0));
    // 0x21cad8: 0x3c0d004a  lui         $t5, 0x4A
    ctx->pc = 0x21cad8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)74 << 16));
    // 0x21cadc: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x21cadcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x21cae0: 0x25a634e0  addiu       $a2, $t5, 0x34E0
    ctx->pc = 0x21cae0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 13536));
    // 0x21cae4: 0xada034e0  sw          $zero, 0x34E0($t5)
    ctx->pc = 0x21cae4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34E0u, _value); } while (0);
    // 0x21cae8: 0x3c0f004a  lui         $t7, 0x4A
    ctx->pc = 0x21cae8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)74 << 16));
    // 0x21caec: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x21caecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34ECu, _value); } while (0);
    // 0x21caf0: 0x25e734f0  addiu       $a3, $t7, 0x34F0
    ctx->pc = 0x21caf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 13552));
    // 0x21caf4: 0xade034f0  sw          $zero, 0x34F0($t7)
    ctx->pc = 0x21caf4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34F0u, _value); } while (0);
    // 0x21caf8: 0x3c10004a  lui         $s0, 0x4A
    ctx->pc = 0x21caf8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)74 << 16));
    // 0x21cafc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x21cafcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34FCu, _value); } while (0);
    // 0x21cb00: 0x26083500  addiu       $t0, $s0, 0x3500
    ctx->pc = 0x21cb00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 13568));
    // 0x21cb04: 0xae003500  sw          $zero, 0x3500($s0)
    ctx->pc = 0x21cb04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3500u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3500u, _value); } while (0);
    // 0x21cb08: 0x3c11004a  lui         $s1, 0x4A
    ctx->pc = 0x21cb08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)74 << 16));
    // 0x21cb0c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x21cb0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A350Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A350Cu, _value); } while (0);
    // 0x21cb10: 0x26293510  addiu       $t1, $s1, 0x3510
    ctx->pc = 0x21cb10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 13584));
    // 0x21cb14: 0xae203510  sw          $zero, 0x3510($s1)
    ctx->pc = 0x21cb14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3510u, _value); } while (0);
    // 0x21cb18: 0x3c12004a  lui         $s2, 0x4A
    ctx->pc = 0x21cb18u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)74 << 16));
    // 0x21cb1c: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x21cb1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A351Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A351Cu, _value); } while (0);
    // 0x21cb20: 0x264a3520  addiu       $t2, $s2, 0x3520
    ctx->pc = 0x21cb20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 13600));
    // 0x21cb24: 0xae403520  sw          $zero, 0x3520($s2)
    ctx->pc = 0x21cb24u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3520u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3520u, _value); } while (0);
    // 0x21cb28: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x21cb28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
    // 0x21cb2c: 0xad40000c  sw          $zero, 0xC($t2)
    ctx->pc = 0x21cb2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A352Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A352Cu, _value); } while (0);
    // 0x21cb30: 0x266c3530  addiu       $t4, $s3, 0x3530
    ctx->pc = 0x21cb30u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 13616));
    // 0x21cb34: 0xae603530  sw          $zero, 0x3530($s3)
    ctx->pc = 0x21cb34u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3530u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3530u, _value); } while (0);
    // 0x21cb38: 0x3c0e004a  lui         $t6, 0x4A
    ctx->pc = 0x21cb38u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)74 << 16));
    // 0x21cb3c: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x21cb3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A353Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A353Cu, _value); } while (0);
    // 0x21cb40: 0x25cb3540  addiu       $t3, $t6, 0x3540
    ctx->pc = 0x21cb40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 14), 13632));
    // 0x21cb44: 0xadc03540  sw          $zero, 0x3540($t6)
    ctx->pc = 0x21cb44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3540u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3540u, _value); } while (0);
    // 0x21cb48: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cb4c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21cb4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34C4u, _value); } while (0);
    // 0x21cb50: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21cb54: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x21cb54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34C8u, _value); } while (0);
    // 0x21cb58: 0x24843550  addiu       $a0, $a0, 0x3550
    ctx->pc = 0x21cb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13648));
    // 0x21cb5c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x21cb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x21cb60: 0x24a51808  addiu       $a1, $a1, 0x1808
    ctx->pc = 0x21cb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6152));
    // 0x21cb64: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x21cb64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x21cb68: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x21cb68u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34E4u, _value); } while (0);
    // 0x21cb6c: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x21cb6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34E8u, _value); } while (0);
    // 0x21cb70: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x21cb70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34F4u, _value); } while (0);
    // 0x21cb74: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x21cb74u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A34F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A34F8u, _value); } while (0);
    // 0x21cb78: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x21cb78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3504u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3504u, _value); } while (0);
    // 0x21cb7c: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x21cb7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3508u, _value); } while (0);
    // 0x21cb80: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x21cb80u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3514u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3514u, _value); } while (0);
    // 0x21cb84: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x21cb84u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3518u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3518u, _value); } while (0);
    // 0x21cb88: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x21cb88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3524u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3524u, _value); } while (0);
    // 0x21cb8c: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x21cb8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3528u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3528u, _value); } while (0);
    // 0x21cb90: 0xad800004  sw          $zero, 0x4($t4)
    ctx->pc = 0x21cb90u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3534u, _value); } while (0);
    // 0x21cb94: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x21cb94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3538u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3538u, _value); } while (0);
    // 0x21cb98: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x21cb98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A3544u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A3544u, _value); } while (0);
    // 0x21cb9c: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x21cb9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4A354Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4A354Cu, _value); } while (0);
    // 0x21cba0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21CBA0u;
    SET_GPR_U32(ctx, 31, 0x21CBA8u);
    ctx->pc = 0x21CBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBA0u;
    // 0x21cba4: 0xad600008  sw          $zero, 0x8($t3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21CBA0u, 0x21CBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBA8u;
label_21cba8:
    // 0x21cba8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cbac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21cbacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21cbb0: 0x24843558  addiu       $a0, $a0, 0x3558
    ctx->pc = 0x21cbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13656));
    // 0x21cbb4: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21CBB4u;
    SET_GPR_U32(ctx, 31, 0x21CBBCu);
    ctx->pc = 0x21CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBB4u;
    // 0x21cbb8: 0x24a51810  addiu       $a1, $a1, 0x1810 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21CBB4u, 0x21CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBBCu;
label_21cbbc:
    // 0x21cbbc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cbc0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21cbc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21cbc4: 0x24843560  addiu       $a0, $a0, 0x3560
    ctx->pc = 0x21cbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13664));
    // 0x21cbc8: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21CBC8u;
    SET_GPR_U32(ctx, 31, 0x21CBD0u);
    ctx->pc = 0x21CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBC8u;
    // 0x21cbcc: 0x24a51818  addiu       $a1, $a1, 0x1818 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21CBC8u, 0x21CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBD0u;
label_21cbd0:
    // 0x21cbd0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cbd4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21cbd8: 0x24843568  addiu       $a0, $a0, 0x3568
    ctx->pc = 0x21cbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13672));
    // 0x21cbdc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x21CBDCu;
    SET_GPR_U32(ctx, 31, 0x21CBE4u);
    ctx->pc = 0x21CBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBDCu;
    // 0x21cbe0: 0x24a51820  addiu       $a1, $a1, 0x1820 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x21CBDCu, 0x21CBE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBE4u;
label_21cbe4:
    // 0x21cbe4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cbe8: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x21cbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x21cbec: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x21CBECu;
    SET_GPR_U32(ctx, 31, 0x21CBF4u);
    ctx->pc = 0x21CBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBECu;
    // 0x21cbf0: 0x24843570  addiu       $a0, $a0, 0x3570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x21CBECu, 0x21CBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CBF4u;
label_21cbf4:
    // 0x21cbf4: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cbf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cbf8: 0xc0c333e  jal         func_30CCF8
    ctx->pc = 0x21CBF8u;
    SET_GPR_U32(ctx, 31, 0x21CC00u);
    ctx->pc = 0x21CBFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CBF8u;
    // 0x21cbfc: 0x24843578  addiu       $a0, $a0, 0x3578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCF8u, 0x21CBF8u, 0x21CC00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC00u;
label_21cc00:
    // 0x21cc00: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x21cc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x21cc04: 0xc0c333e  jal         func_30CCF8
    ctx->pc = 0x21CC04u;
    SET_GPR_U32(ctx, 31, 0x21CC0Cu);
    ctx->pc = 0x21CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CC04u;
    // 0x21cc08: 0x24843588  addiu       $a0, $a0, 0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CCF8u, 0x21CC04u, 0x21CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CC0Cu;
label_21cc0c:
    // 0x21cc0c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x21cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x21cc10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21cc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21cc14: 0x24423598  addiu       $v0, $v0, 0x3598
    ctx->pc = 0x21cc14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13720));
    // 0x21cc18: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x21cc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21cc1c: 0x0  nop
    ctx->pc = 0x21cc1cu;
    // NOP
label_21cc20:
    // 0x21cc20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x21cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x21cc24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21cc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x21cc28: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x21cc28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x21cc2c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x21cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x21cc30: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21CC30u;
    {
        const bool branch_taken_0x21cc30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x21CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC30u;
        // 0x21cc34: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21cc30) {
            ctx->pc = 0x21CC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21cc20;
        }
    }
    ctx->pc = 0x21CC38u;
label_21cc38:
    // 0x21cc38: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x21cc38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cc3c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x21cc3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21cc40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x21cc40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cc44: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x21cc44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x21cc48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x21cc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21cc4c: 0x3e00008  jr          $ra
    ctx->pc = 0x21CC4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CC4Cu;
        // 0x21cc50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CC4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CC54u;
    // 0x21cc54: 0x0  nop
    ctx->pc = 0x21cc54u;
    // NOP
    ctx->pc = 0x21cc58u;
}
