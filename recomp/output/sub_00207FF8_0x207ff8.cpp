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

// Function: sub_00207FF8
// Address: 0x207ff8 - 0x208268
void sub_00207FF8_0x207ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207FF8_0x207ff8");
#endif

    switch (ctx->pc) {
        case 0x208030u: goto label_208030;
        case 0x208064u: goto label_208064;
        case 0x208094u: goto label_208094;
        case 0x2080a8u: goto label_2080a8;
        case 0x2080c0u: goto label_2080c0;
        case 0x2080d8u: goto label_2080d8;
        case 0x208108u: goto label_208108;
        case 0x208110u: goto label_208110;
        case 0x208118u: goto label_208118;
        case 0x208140u: goto label_208140;
        case 0x208174u: goto label_208174;
        case 0x208184u: goto label_208184;
        case 0x208194u: goto label_208194;
        case 0x2081b8u: goto label_2081b8;
        case 0x2081c0u: goto label_2081c0;
        case 0x2081c8u: goto label_2081c8;
        case 0x2081d0u: goto label_2081d0;
        case 0x2081d8u: goto label_2081d8;
        case 0x208208u: goto label_208208;
        case 0x208228u: goto label_208228;
        default: break;
    }

    ctx->pc = 0x207ff8u;

    // 0x207ff8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x207ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x207ffc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x207ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x208000: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x208000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x208004: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x208004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208008: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x208008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x20800c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x20800cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208010: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x208010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x208014: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x208014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x208018: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x208018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x20801c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x20801cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x208020: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x208020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x208024: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x208024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x208028: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x208028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x20802c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x20802cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_208030:
    // 0x208030: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x208030u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208034: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x208034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x208038: 0x90433388  lbu         $v1, 0x3388($v0)
    ctx->pc = 0x208038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13192)));
    // 0x20803c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x20803Cu;
    {
        const bool branch_taken_0x20803c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x208040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20803Cu;
        // 0x208040: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20803c) {
            ctx->pc = 0x208050u;
            goto label_208050;
        }
    }
    ctx->pc = 0x208044u;
    // 0x208044: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x208044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x208048u;
    {
        const bool branch_taken_0x208048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208048u;
        // 0x20804c: 0x24450bc8  addiu       $a1, $v0, 0xBC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3016));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208048) {
            ctx->pc = 0x20805Cu;
            goto label_20805c;
        }
    }
    ctx->pc = 0x208050u;
label_208050:
    // 0x208050: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x208050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x208054: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x208054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208058: 0x24450bd0  addiu       $a1, $v0, 0xBD0
    ctx->pc = 0x208058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3024));
label_20805c:
    // 0x20805c: 0xc08217a  jal         func_2085E8
    ctx->pc = 0x20805Cu;
    SET_GPR_U32(ctx, 31, 0x208064u);
    ctx->pc = 0x208060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20805Cu;
    // 0x208060: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x20805Cu, 0x208064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208064u;
label_208064:
    // 0x208064: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x208064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208068: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20806c: 0x1222006e  beq         $s1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x20806Cu;
    {
        const bool branch_taken_0x20806c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x208070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20806Cu;
        // 0x208070: 0xafb00028  sw          $s0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20806c) {
            ctx->pc = 0x208228u;
            goto label_208228;
        }
    }
    ctx->pc = 0x208074u;
    // 0x208074: 0x2971021  addu        $v0, $s4, $s7
    ctx->pc = 0x208074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
    // 0x208078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x208078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20807c: 0x8c503380  lw          $s0, 0x3380($v0)
    ctx->pc = 0x20807cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13184)));
    // 0x208080: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208084: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x208084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x208088: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x208088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x20808c: 0xc0821c2  jal         func_208708
    ctx->pc = 0x20808Cu;
    SET_GPR_U32(ctx, 31, 0x208094u);
    ctx->pc = 0x208090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20808Cu;
    // 0x208090: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208708u, 0x20808Cu, 0x208094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208094u;
label_208094:
    // 0x208094: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x208094u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208098: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x208098u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20809c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x20809cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2080a0: 0xc0821c2  jal         func_208708
    ctx->pc = 0x2080A0u;
    SET_GPR_U32(ctx, 31, 0x2080A8u);
    ctx->pc = 0x2080A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080A0u;
    // 0x2080a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208708u, 0x2080A0u, 0x2080A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080A8u;
label_2080a8:
    // 0x2080a8: 0x5e9823  subu        $s3, $v0, $fp
    ctx->pc = 0x2080a8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x2080ac: 0x1260005e  beqz        $s3, . + 4 + (0x5E << 2)
    ctx->pc = 0x2080ACu;
    {
        const bool branch_taken_0x2080ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2080B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080ACu;
        // 0x2080b0: 0x2971021  addu        $v0, $s4, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080ac) {
            ctx->pc = 0x208228u;
            goto label_208228;
        }
    }
    ctx->pc = 0x2080B4u;
    // 0x2080b4: 0x8c563384  lw          $s6, 0x3384($v0)
    ctx->pc = 0x2080b4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13188)));
    // 0x2080b8: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x2080B8u;
    SET_GPR_U32(ctx, 31, 0x2080C0u);
    ctx->pc = 0x2080BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2080B8u;
    // 0x2080bc: 0x162080  sll         $a0, $s6, 2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x2080B8u, 0x2080C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2080C0u;
label_2080c0:
    // 0x2080c0: 0x1ac0000b  blez        $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x2080C0u;
    {
        const bool branch_taken_0x2080c0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2080C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080C0u;
        // 0x2080c4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080c0) {
            ctx->pc = 0x2080F0u;
            goto label_2080f0;
        }
    }
    ctx->pc = 0x2080C8u;
    // 0x2080c8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2080c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2080cc: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2080ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080d0: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2080d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2080d4: 0x0  nop
    ctx->pc = 0x2080d4u;
    // NOP
label_2080d8:
    // 0x2080d8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2080d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2080dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2080dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2080e0: 0x0  nop
    ctx->pc = 0x2080e0u;
    // NOP
    // 0x2080e4: 0x0  nop
    ctx->pc = 0x2080e4u;
    // NOP
    // 0x2080e8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2080E8u;
    {
        const bool branch_taken_0x2080e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2080ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080E8u;
        // 0x2080ec: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080e8) {
            ctx->pc = 0x2080D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2080d8;
        }
    }
    ctx->pc = 0x2080F0u;
label_2080f0:
    // 0x2080f0: 0x1ac00049  blez        $s6, . + 4 + (0x49 << 2)
    ctx->pc = 0x2080F0u;
    {
        const bool branch_taken_0x2080f0 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x2080F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2080F0u;
        // 0x2080f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2080f0) {
            ctx->pc = 0x208218u;
            goto label_208218;
        }
    }
    ctx->pc = 0x2080F8u;
    // 0x2080f8: 0x2682338c  addiu       $v0, $s4, 0x338C
    ctx->pc = 0x2080f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 13196));
    // 0x2080fc: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x2080fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x208100: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x208100u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x208104: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x208104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_208108:
    // 0x208108: 0x11a880  sll         $s5, $s1, 2
    ctx->pc = 0x208108u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x20810c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x20810cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_208110:
    // 0x208110: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x208110u;
    SET_GPR_U32(ctx, 31, 0x208118u);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x208110u, 0x208118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208118u;
label_208118:
    // 0x208118: 0x53001b  divu        $zero, $v0, $s3
    ctx->pc = 0x208118u;
    { uint32_t divisor = GPR_U32(ctx, 19); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x20811c: 0x52600001  beql        $s3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20811Cu;
    {
        const bool branch_taken_0x20811c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x20811c) {
            ctx->pc = 0x208120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20811Cu;
            // 0x208120: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x208124u;
            goto label_208124;
        }
    }
    ctx->pc = 0x208124u;
label_208124:
    // 0x208124: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x208124u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208128: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x208128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20812c: 0x1810  mfhi        $v1
    ctx->pc = 0x20812cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x208130: 0x1a20000b  blez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x208130u;
    {
        const bool branch_taken_0x208130 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x208134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208130u;
        // 0x208134: 0x3c38021  addu        $s0, $fp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208130) {
            ctx->pc = 0x208160u;
            goto label_208160;
        }
    }
    ctx->pc = 0x208138u;
    // 0x208138: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x208138u;
    {
        const bool branch_taken_0x208138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208138u;
        // 0x20813c: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208138) {
            ctx->pc = 0x208154u;
            goto label_208154;
        }
    }
    ctx->pc = 0x208140u;
label_208140:
    // 0x208140: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x208140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x208144: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x208144u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x208148: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x208148u;
    {
        const bool branch_taken_0x208148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208148u;
        // 0x20814c: 0x521021  addu        $v0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208148) {
            ctx->pc = 0x208160u;
            goto label_208160;
        }
    }
    ctx->pc = 0x208150u;
    // 0x208150: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x208150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208154:
    // 0x208154: 0x1602fffa  bne         $s0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x208154u;
    {
        const bool branch_taken_0x208154 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x208158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208154u;
        // 0x208158: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208154) {
            ctx->pc = 0x208140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208140;
        }
    }
    ctx->pc = 0x20815Cu;
    // 0x20815c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20815cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208160:
    // 0x208160: 0x1480ffeb  bnez        $a0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x208160u;
    {
        const bool branch_taken_0x208160 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x208164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208160u;
        // 0x208164: 0x2b21021  addu        $v0, $s5, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208160) {
            ctx->pc = 0x208110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208110;
        }
    }
    ctx->pc = 0x208168u;
    // 0x208168: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x208168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20816c: 0xc0b4c9a  jal         func_2D3268
    ctx->pc = 0x20816Cu;
    SET_GPR_U32(ctx, 31, 0x208174u);
    ctx->pc = 0x208170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20816Cu;
    // 0x208170: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3268u, 0x20816Cu, 0x208174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208174u;
label_208174:
    // 0x208174: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x208174u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x208178: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x208178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20817c: 0xc0b4ce0  jal         func_2D3380
    ctx->pc = 0x20817Cu;
    SET_GPR_U32(ctx, 31, 0x208184u);
    ctx->pc = 0x208180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20817Cu;
    // 0x208180: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3380u, 0x20817Cu, 0x208184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208184u;
label_208184:
    // 0x208184: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x208184u;
    {
        const bool branch_taken_0x208184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208184u;
        // 0x208188: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208184) {
            ctx->pc = 0x2081FCu;
            goto label_2081fc;
        }
    }
    ctx->pc = 0x20818Cu;
    // 0x20818c: 0xc0b4d08  jal         func_2D3420
    ctx->pc = 0x20818Cu;
    SET_GPR_U32(ctx, 31, 0x208194u);
    ctx->pc = 0x208190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20818Cu;
    // 0x208190: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3420u, 0x20818Cu, 0x208194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208194u;
label_208194:
    // 0x208194: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x208194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x208198: 0x2aac0  sll         $s5, $v0, 11
    ctx->pc = 0x208198u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x20819c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20819cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2081a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2081a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2081a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2081a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2081ac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2081acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2081b0: 0xc0b4d14  jal         func_2D3450
    ctx->pc = 0x2081B0u;
    SET_GPR_U32(ctx, 31, 0x2081B8u);
    ctx->pc = 0x2081B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081B0u;
    // 0x2081b4: 0x8c670004  lw          $a3, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3450u, 0x2081B0u, 0x2081B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081B8u;
label_2081b8:
    // 0x2081b8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2081B8u;
    {
        const bool branch_taken_0x2081b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081B8u;
        // 0x2081bc: 0x2691338c  addiu       $s1, $s4, 0x338C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 13196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081b8) {
            ctx->pc = 0x2081D0u;
            goto label_2081d0;
        }
    }
    ctx->pc = 0x2081C0u;
label_2081c0:
    // 0x2081c0: 0xc081710  jal         func_205C40
    ctx->pc = 0x2081C0u;
    SET_GPR_U32(ctx, 31, 0x2081C8u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x2081C0u, 0x2081C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081C8u;
label_2081c8:
    // 0x2081c8: 0xc0817c0  jal         func_205F00
    ctx->pc = 0x2081C8u;
    SET_GPR_U32(ctx, 31, 0x2081D0u);
    ctx->pc = 0x2081CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081C8u;
    // 0x2081cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F00u, 0x2081C8u, 0x2081D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081D0u;
label_2081d0:
    // 0x2081d0: 0xc0b4d40  jal         func_2D3500
    ctx->pc = 0x2081D0u;
    SET_GPR_U32(ctx, 31, 0x2081D8u);
    ctx->pc = 0x2081D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2081D0u;
    // 0x2081d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3500u, 0x2081D0u, 0x2081D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2081D8u;
label_2081d8:
    // 0x2081d8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2081D8u;
    {
        const bool branch_taken_0x2081d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2081DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2081D8u;
        // 0x2081dc: 0x2372021  addu        $a0, $s1, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2081d8) {
            ctx->pc = 0x2081C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2081c0;
        }
    }
    ctx->pc = 0x2081E0u;
    // 0x2081e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2081e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2081e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2081e8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2081e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2081ec: 0xa045000c  sb          $a1, 0xC($v0)
    ctx->pc = 0x2081ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x2081f0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2081f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2081f4: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x2081f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2081f8: 0xac750008  sw          $s5, 0x8($v1)
    ctx->pc = 0x2081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 21));
label_2081fc:
    // 0x2081fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2081fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208200: 0xc0b4cac  jal         func_2D32B0
    ctx->pc = 0x208200u;
    SET_GPR_U32(ctx, 31, 0x208208u);
    ctx->pc = 0x208204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208200u;
    // 0x208204: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D32B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D32B0u, 0x208200u, 0x208208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208208u;
label_208208:
    // 0x208208: 0x8fb1002c  lw          $s1, 0x2C($sp)
    ctx->pc = 0x208208u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x20820c: 0x236102a  slt         $v0, $s1, $s6
    ctx->pc = 0x20820cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x208210: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x208210u;
    {
        const bool branch_taken_0x208210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208210u;
        // 0x208214: 0x26240001  addiu       $a0, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208210) {
            ctx->pc = 0x208108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208108;
        }
    }
    ctx->pc = 0x208218u;
label_208218:
    // 0x208218: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x208218u;
    {
        const bool branch_taken_0x208218 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x20821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208218u;
        // 0x20821c: 0x8fb00028  lw          $s0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208218) {
            ctx->pc = 0x20822Cu;
            goto label_20822c;
        }
    }
    ctx->pc = 0x208220u;
    // 0x208220: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x208220u;
    SET_GPR_U32(ctx, 31, 0x208228u);
    ctx->pc = 0x208224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208220u;
    // 0x208224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x208220u, 0x208228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x208228u;
label_208228:
    // 0x208228: 0x8fb00028  lw          $s0, 0x28($sp)
    ctx->pc = 0x208228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_20822c:
    // 0x20822c: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x20822cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x208230: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
    ctx->pc = 0x208230u;
    {
        const bool branch_taken_0x208230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x208230) {
            ctx->pc = 0x208234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208230u;
            // 0x208234: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_208030;
        }
    }
    ctx->pc = 0x208238u;
    // 0x208238: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x208238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20823c: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x20823cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x208240: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x208240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x208244: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x208244u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x208248: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x208248u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20824c: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x20824cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x208250: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x208250u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x208254: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x208254u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x208258: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x208258u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20825c: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x20825cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x208260: 0x3e00008  jr          $ra
    ctx->pc = 0x208260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208260u;
        // 0x208264: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208268u;
}
