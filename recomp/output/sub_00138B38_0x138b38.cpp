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

// Function: sub_00138B38
// Address: 0x138b38 - 0x138c70
void sub_00138B38_0x138b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138B38_0x138b38");
#endif

    switch (ctx->pc) {
        case 0x138b78u: goto label_138b78;
        case 0x138b84u: goto label_138b84;
        case 0x138bbcu: goto label_138bbc;
        case 0x138be0u: goto label_138be0;
        case 0x138becu: goto label_138bec;
        case 0x138bf4u: goto label_138bf4;
        case 0x138c00u: goto label_138c00;
        case 0x138c0cu: goto label_138c0c;
        case 0x138c18u: goto label_138c18;
        case 0x138c24u: goto label_138c24;
        case 0x138c38u: goto label_138c38;
        case 0x138c44u: goto label_138c44;
        default: break;
    }

    ctx->pc = 0x138b38u;

    // 0x138b38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x138b3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x138b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x138b40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x138b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x138b44: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138b44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x138b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x138b4c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x138b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x138b50: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x138b50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b54: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x138b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x138b58: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x138b58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x138b5c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x138b5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138b60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x138b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x138b64: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x138b64u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x138b68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x138b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x138b6c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x138b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138b70: 0xc04d8d6  jal         func_136358
    ctx->pc = 0x138B70u;
    SET_GPR_U32(ctx, 31, 0x138B78u);
    ctx->pc = 0x138B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B70u;
    // 0x138b74: 0x9225046c  lbu         $a1, 0x46C($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136358u, 0x138B70u, 0x138B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B78u;
label_138b78:
    // 0x138b78: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x138b78u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x138b7c: 0xc04d8e2  jal         func_136388
    ctx->pc = 0x138B7Cu;
    SET_GPR_U32(ctx, 31, 0x138B84u);
    ctx->pc = 0x138B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138B7Cu;
    // 0x138b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136388u, 0x138B7Cu, 0x138B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138B84u;
label_138b84:
    // 0x138b84: 0x9222046c  lbu         $v0, 0x46C($s1)
    ctx->pc = 0x138b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x138b88: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x138b88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x138b8c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x138b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x138b90: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x138b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x138b94: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x138b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x138b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x138b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x138b9c: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x138b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138ba0: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x138ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x138ba4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x138ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x138ba8: 0x8c94020c  lw          $s4, 0x20C($a0)
    ctx->pc = 0x138ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
    // 0x138bac: 0x12800025  beqz        $s4, . + 4 + (0x25 << 2)
    ctx->pc = 0x138BACu;
    {
        const bool branch_taken_0x138bac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x138BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138BACu;
        // 0x138bb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138bac) {
            ctx->pc = 0x138C44u;
            goto label_138c44;
        }
    }
    ctx->pc = 0x138BB4u;
    // 0x138bb4: 0xc04da9c  jal         func_136A70
    ctx->pc = 0x138BB4u;
    SET_GPR_U32(ctx, 31, 0x138BBCu);
    ctx->pc = 0x138BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BB4u;
    // 0x138bb8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136A70u, 0x138BB4u, 0x138BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BBCu;
label_138bbc:
    // 0x138bbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bc0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x138bc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138bc4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x138bc4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x138bc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bcc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x138bccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x138bd0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x138bd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138bd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bd8: 0xc04daca  jal         func_136B28
    ctx->pc = 0x138BD8u;
    SET_GPR_U32(ctx, 31, 0x138BE0u);
    ctx->pc = 0x138BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BD8u;
    // 0x138bdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B28u, 0x138BD8u, 0x138BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BE0u;
label_138be0:
    // 0x138be0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x138be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138be4: 0xc046058  jal         func_118160
    ctx->pc = 0x138BE4u;
    SET_GPR_U32(ctx, 31, 0x138BECu);
    ctx->pc = 0x138BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BE4u;
    // 0x138be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118160u, 0x138BE4u, 0x138BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BECu;
label_138bec:
    // 0x138bec: 0xc040d5c  jal         func_103570
    ctx->pc = 0x138BECu;
    SET_GPR_U32(ctx, 31, 0x138BF4u);
    ctx->pc = 0x138BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BECu;
    // 0x138bf0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x103570u, 0x138BECu, 0x138BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138BF4u;
label_138bf4:
    // 0x138bf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x138bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138bf8: 0xc045fea  jal         func_117FA8
    ctx->pc = 0x138BF8u;
    SET_GPR_U32(ctx, 31, 0x138C00u);
    ctx->pc = 0x138BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138BF8u;
    // 0x138bfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117FA8u, 0x138BF8u, 0x138C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C00u;
label_138c00:
    // 0x138c00: 0x2ea50001  sltiu       $a1, $s5, 0x1
    ctx->pc = 0x138c00u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x138c04: 0xc046104  jal         func_118410
    ctx->pc = 0x138C04u;
    SET_GPR_U32(ctx, 31, 0x138C0Cu);
    ctx->pc = 0x138C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C04u;
    // 0x138c08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118410u, 0x138C04u, 0x138C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C0Cu;
label_138c0c:
    // 0x138c0c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x138c0cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x138c10: 0xc046290  jal         func_118A40
    ctx->pc = 0x138C10u;
    SET_GPR_U32(ctx, 31, 0x138C18u);
    ctx->pc = 0x138C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C10u;
    // 0x138c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118A40u, 0x138C10u, 0x138C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C18u;
label_138c18:
    // 0x138c18: 0x9225046c  lbu         $a1, 0x46C($s1)
    ctx->pc = 0x138c18u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1132)));
    // 0x138c1c: 0xc04d8f8  jal         func_1363E0
    ctx->pc = 0x138C1Cu;
    SET_GPR_U32(ctx, 31, 0x138C24u);
    ctx->pc = 0x138C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C1Cu;
    // 0x138c20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1363E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1363E0u, 0x138C1Cu, 0x138C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C24u;
label_138c24:
    // 0x138c24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x138c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x138c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x138c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c30: 0xc04dae2  jal         func_136B88
    ctx->pc = 0x138C30u;
    SET_GPR_U32(ctx, 31, 0x138C38u);
    ctx->pc = 0x138C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C30u;
    // 0x138c34: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136B88u, 0x138C30u, 0x138C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C38u;
label_138c38:
    // 0x138c38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x138c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138c3c: 0xc043c56  jal         func_10F158
    ctx->pc = 0x138C3Cu;
    SET_GPR_U32(ctx, 31, 0x138C44u);
    ctx->pc = 0x138C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138C3Cu;
    // 0x138c40: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F158u, 0x138C3Cu, 0x138C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x138C44u;
label_138c44:
    // 0x138c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x138c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138c48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x138c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x138c4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x138c4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138c50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x138c50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x138c54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x138c54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138c58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x138c58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x138c5c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x138c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x138c60: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x138c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138c64: 0x3e00008  jr          $ra
    ctx->pc = 0x138C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138C64u;
        // 0x138c68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138C6Cu;
    // 0x138c6c: 0x0  nop
    ctx->pc = 0x138c6cu;
    // NOP
    ctx->pc = 0x138c70u;
}
