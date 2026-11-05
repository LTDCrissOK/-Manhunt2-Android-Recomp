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

// Function: sub_0014FF38
// Address: 0x14ff38 - 0x1500d8
void sub_0014FF38_0x14ff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014FF38_0x14ff38");
#endif

    switch (ctx->pc) {
        case 0x14ff64u: goto label_14ff64;
        case 0x14ff78u: goto label_14ff78;
        case 0x14ff84u: goto label_14ff84;
        case 0x14ff94u: goto label_14ff94;
        case 0x14ffa4u: goto label_14ffa4;
        case 0x14ffb4u: goto label_14ffb4;
        case 0x14ffc0u: goto label_14ffc0;
        case 0x14ffe4u: goto label_14ffe4;
        case 0x14fff0u: goto label_14fff0;
        case 0x14fffcu: goto label_14fffc;
        case 0x150008u: goto label_150008;
        case 0x150040u: goto label_150040;
        case 0x150050u: goto label_150050;
        case 0x15006cu: goto label_15006c;
        case 0x150078u: goto label_150078;
        case 0x15008cu: goto label_15008c;
        case 0x150098u: goto label_150098;
        case 0x1500a4u: goto label_1500a4;
        case 0x1500b0u: goto label_1500b0;
        default: break;
    }

    ctx->pc = 0x14ff38u;

    // 0x14ff38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ff3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14ff3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x14ff40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14ff40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff44: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x14ff44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x14ff48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14ff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14ff4c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x14ff4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x14ff50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x14ff50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x14ff54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x14ff54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x14ff58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x14ff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x14ff5c: 0xc0549d0  jal         func_152740
    ctx->pc = 0x14FF5Cu;
    SET_GPR_U32(ctx, 31, 0x14FF64u);
    ctx->pc = 0x14FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF5Cu;
    // 0x14ff60: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152740u, 0x14FF5Cu, 0x14FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF64u;
label_14ff64:
    // 0x14ff64: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14ff64u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14ff68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14ff68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x14ff6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ff70: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x14FF70u;
    SET_GPR_U32(ctx, 31, 0x14FF78u);
    ctx->pc = 0x14FF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF70u;
    // 0x14ff74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x14FF70u, 0x14FF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF78u;
label_14ff78:
    // 0x14ff78: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14ff78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14ff7c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x14FF7Cu;
    SET_GPR_U32(ctx, 31, 0x14FF84u);
    ctx->pc = 0x14FF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF7Cu;
    // 0x14ff80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x14FF7Cu, 0x14FF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF84u;
label_14ff84:
    // 0x14ff84: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14ff84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14ff88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff8c: 0xc053b00  jal         func_14EC00
    ctx->pc = 0x14FF8Cu;
    SET_GPR_U32(ctx, 31, 0x14FF94u);
    ctx->pc = 0x14FF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF8Cu;
    // 0x14ff90: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14EC00u, 0x14FF8Cu, 0x14FF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FF94u;
label_14ff94:
    // 0x14ff94: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14ff94u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14ff98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ff98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ff9c: 0xc053c7c  jal         func_14F1F0
    ctx->pc = 0x14FF9Cu;
    SET_GPR_U32(ctx, 31, 0x14FFA4u);
    ctx->pc = 0x14FFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FF9Cu;
    // 0x14ffa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F1F0u, 0x14FF9Cu, 0x14FFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFA4u;
label_14ffa4:
    // 0x14ffa4: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x14ffa4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x14ffa8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x14ffa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffac: 0xc053cfc  jal         func_14F3F0
    ctx->pc = 0x14FFACu;
    SET_GPR_U32(ctx, 31, 0x14FFB4u);
    ctx->pc = 0x14FFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFACu;
    // 0x14ffb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F3F0u, 0x14FFACu, 0x14FFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFB4u;
label_14ffb4:
    // 0x14ffb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ffb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffb8: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x14FFB8u;
    SET_GPR_U32(ctx, 31, 0x14FFC0u);
    ctx->pc = 0x14FFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFB8u;
    // 0x14ffbc: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x14FFB8u, 0x14FFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFC0u;
label_14ffc0:
    // 0x14ffc0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14ffc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffc4: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x14ffc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ffc8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14ffc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffcc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14ffccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffd0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x14ffd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x14ffd4: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x14ffd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x14ffd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14ffd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ffdc: 0xc04daca  jal         func_136B28
    ctx->pc = 0x14FFDCu;
    SET_GPR_U32(ctx, 31, 0x14FFE4u);
    ctx->pc = 0x14FFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFDCu;
    // 0x14ffe0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x14FFDCu, 0x14FFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFE4u;
label_14ffe4:
    // 0x14ffe4: 0x8e250964  lw          $a1, 0x964($s1)
    ctx->pc = 0x14ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2404)));
    // 0x14ffe8: 0xc040c94  jal         func_103250
    ctx->pc = 0x14FFE8u;
    SET_GPR_U32(ctx, 31, 0x14FFF0u);
    ctx->pc = 0x14FFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFE8u;
    // 0x14ffec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103250u, 0x14FFE8u, 0x14FFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFF0u;
label_14fff0:
    // 0x14fff0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x14fff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fff4: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x14FFF4u;
    SET_GPR_U32(ctx, 31, 0x14FFFCu);
    ctx->pc = 0x14FFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FFF4u;
    // 0x14fff8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x14FFF4u, 0x14FFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FFFCu;
label_14fffc:
    // 0x14fffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14fffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150000: 0xc046104  jal         func_118410
    ctx->pc = 0x150000u;
    SET_GPR_U32(ctx, 31, 0x150008u);
    ctx->pc = 0x150004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150000u;
    // 0x150004: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x150000u, 0x150008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150008u;
label_150008:
    // 0x150008: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x150008u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x15000c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x15000cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x150010: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x150010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x150014: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x150014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x150018: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15001c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15001cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x150020: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x150020u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x150024: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x150024u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x150028: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x150028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x15002c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x15002Cu;
    {
        const bool branch_taken_0x15002c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x150030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15002Cu;
        // 0x150030: 0x8c94020c  lw          $s4, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15002c) {
            ctx->pc = 0x150058u;
            goto label_150058;
        }
    }
    ctx->pc = 0x150034u;
    // 0x150034: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x150034u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150038: 0xc046290  jal         func_118A40
    ctx->pc = 0x150038u;
    SET_GPR_U32(ctx, 31, 0x150040u);
    ctx->pc = 0x15003Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150038u;
    // 0x15003c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x150038u, 0x150040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150040u;
label_150040:
    // 0x150040: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150044: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x150044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150048: 0xc04e3f6  jal         func_138FD8
    ctx->pc = 0x150048u;
    SET_GPR_U32(ctx, 31, 0x150050u);
    ctx->pc = 0x15004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150048u;
    // 0x15004c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138FD8u, 0x150048u, 0x150050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150050u;
label_150050:
    // 0x150050: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x150050u;
    {
        const bool branch_taken_0x150050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150050u;
        // 0x150054: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150050) {
            ctx->pc = 0x150070u;
            goto label_150070;
        }
    }
    ctx->pc = 0x150058u;
label_150058:
    // 0x150058: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x150058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x15005c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x15005cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x150060: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x150060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x150064: 0xc046290  jal         func_118A40
    ctx->pc = 0x150064u;
    SET_GPR_U32(ctx, 31, 0x15006Cu);
    ctx->pc = 0x150068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150064u;
    // 0x150068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x150064u, 0x15006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15006Cu;
label_15006c:
    // 0x15006c: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x15006cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
label_150070:
    // 0x150070: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x150070u;
    SET_GPR_U32(ctx, 31, 0x150078u);
    ctx->pc = 0x150074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150070u;
    // 0x150074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x150070u, 0x150078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150078u;
label_150078:
    // 0x150078: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x150078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15007c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x15007cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150080: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x150080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150084: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x150084u;
    SET_GPR_U32(ctx, 31, 0x15008Cu);
    ctx->pc = 0x150088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150084u;
    // 0x150088: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x150084u, 0x15008Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15008Cu;
label_15008c:
    // 0x15008c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x15008cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150090: 0xc043c56  jal         func_10F158
    ctx->pc = 0x150090u;
    SET_GPR_U32(ctx, 31, 0x150098u);
    ctx->pc = 0x150094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150090u;
    // 0x150094: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x150090u, 0x150098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150098u;
label_150098:
    // 0x150098: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x150098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15009c: 0xc054484  jal         func_151210
    ctx->pc = 0x15009Cu;
    SET_GPR_U32(ctx, 31, 0x1500A4u);
    ctx->pc = 0x1500A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15009Cu;
    // 0x1500a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151210u, 0x15009Cu, 0x1500A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500A4u;
label_1500a4:
    // 0x1500a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1500a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1500a8: 0xc05477c  jal         func_151DF0
    ctx->pc = 0x1500A8u;
    SET_GPR_U32(ctx, 31, 0x1500B0u);
    ctx->pc = 0x1500ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1500A8u;
    // 0x1500ac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151DF0u, 0x1500A8u, 0x1500B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1500B0u;
label_1500b0:
    // 0x1500b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1500b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1500b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1500b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1500b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1500b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1500bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1500bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1500c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1500c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1500c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1500c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1500c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1500c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1500cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1500CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1500D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1500CCu;
        // 0x1500d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1500CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1500D4u;
    // 0x1500d4: 0x0  nop
    ctx->pc = 0x1500d4u;
    // NOP
    ctx->pc = 0x1500d8u;
}
