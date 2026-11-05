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

// Function: sub_003B2EA0
// Address: 0x3b2ea0 - 0x3b2f90
void sub_003B2EA0_0x3b2ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2EA0_0x3b2ea0");
#endif

    switch (ctx->pc) {
        case 0x3b2ea0u: goto label_3b2ea0;
        case 0x3b2ea4u: goto label_3b2ea4;
        case 0x3b2ea8u: goto label_3b2ea8;
        case 0x3b2eacu: goto label_3b2eac;
        case 0x3b2eb0u: goto label_3b2eb0;
        case 0x3b2eb4u: goto label_3b2eb4;
        case 0x3b2eb8u: goto label_3b2eb8;
        case 0x3b2ebcu: goto label_3b2ebc;
        case 0x3b2ec0u: goto label_3b2ec0;
        case 0x3b2ec4u: goto label_3b2ec4;
        case 0x3b2ec8u: goto label_3b2ec8;
        case 0x3b2eccu: goto label_3b2ecc;
        case 0x3b2ed0u: goto label_3b2ed0;
        case 0x3b2ed4u: goto label_3b2ed4;
        case 0x3b2ed8u: goto label_3b2ed8;
        case 0x3b2edcu: goto label_3b2edc;
        case 0x3b2ee0u: goto label_3b2ee0;
        case 0x3b2ee4u: goto label_3b2ee4;
        case 0x3b2ee8u: goto label_3b2ee8;
        case 0x3b2eecu: goto label_3b2eec;
        case 0x3b2ef0u: goto label_3b2ef0;
        case 0x3b2ef4u: goto label_3b2ef4;
        case 0x3b2ef8u: goto label_3b2ef8;
        case 0x3b2efcu: goto label_3b2efc;
        case 0x3b2f00u: goto label_3b2f00;
        case 0x3b2f04u: goto label_3b2f04;
        case 0x3b2f08u: goto label_3b2f08;
        case 0x3b2f0cu: goto label_3b2f0c;
        case 0x3b2f10u: goto label_3b2f10;
        case 0x3b2f14u: goto label_3b2f14;
        case 0x3b2f18u: goto label_3b2f18;
        case 0x3b2f1cu: goto label_3b2f1c;
        case 0x3b2f20u: goto label_3b2f20;
        case 0x3b2f24u: goto label_3b2f24;
        case 0x3b2f28u: goto label_3b2f28;
        case 0x3b2f2cu: goto label_3b2f2c;
        case 0x3b2f30u: goto label_3b2f30;
        case 0x3b2f34u: goto label_3b2f34;
        case 0x3b2f38u: goto label_3b2f38;
        case 0x3b2f3cu: goto label_3b2f3c;
        case 0x3b2f40u: goto label_3b2f40;
        case 0x3b2f44u: goto label_3b2f44;
        case 0x3b2f48u: goto label_3b2f48;
        case 0x3b2f4cu: goto label_3b2f4c;
        case 0x3b2f50u: goto label_3b2f50;
        case 0x3b2f54u: goto label_3b2f54;
        case 0x3b2f58u: goto label_3b2f58;
        case 0x3b2f5cu: goto label_3b2f5c;
        case 0x3b2f60u: goto label_3b2f60;
        case 0x3b2f64u: goto label_3b2f64;
        case 0x3b2f68u: goto label_3b2f68;
        case 0x3b2f6cu: goto label_3b2f6c;
        case 0x3b2f70u: goto label_3b2f70;
        case 0x3b2f74u: goto label_3b2f74;
        case 0x3b2f78u: goto label_3b2f78;
        case 0x3b2f7cu: goto label_3b2f7c;
        case 0x3b2f80u: goto label_3b2f80;
        case 0x3b2f84u: goto label_3b2f84;
        case 0x3b2f88u: goto label_3b2f88;
        case 0x3b2f8cu: goto label_3b2f8c;
        default: break;
    }

    ctx->pc = 0x3b2ea0u;

label_3b2ea0:
    // 0x3b2ea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b2ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b2ea4:
    // 0x3b2ea4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3b2ea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ea8:
    // 0x3b2ea8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3b2eac:
    // 0x3b2eac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b2eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b2eb0:
    // 0x3b2eb0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b2eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3b2eb4:
    // 0x3b2eb4: 0x68ac0  sll         $s1, $a2, 11
    ctx->pc = 0x3b2eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
label_3b2eb8:
    // 0x3b2eb8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b2eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3b2ebc:
    // 0x3b2ebc: 0x26120004  addiu       $s2, $s0, 0x4
    ctx->pc = 0x3b2ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_3b2ec0:
    // 0x3b2ec0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b2ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3b2ec4:
    // 0x3b2ec4: 0x69880  sll         $s3, $a2, 2
    ctx->pc = 0x3b2ec4u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_3b2ec8:
    // 0x3b2ec8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3b2ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_3b2ecc:
    // 0x3b2ecc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x3b2eccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3b2ed0:
    // 0x3b2ed0: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x3b2ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_3b2ed4:
    // 0x3b2ed4: 0x2534021  addu        $t0, $s2, $s3
    ctx->pc = 0x3b2ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_3b2ed8:
    // 0x3b2ed8: 0x2112021  addu        $a0, $s0, $s1
    ctx->pc = 0x3b2ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3b2edc:
    // 0x3b2edc: 0x3125001f  andi        $a1, $t1, 0x1F
    ctx->pc = 0x3b2edcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
label_3b2ee0:
    // 0x3b2ee0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3b2ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3b2ee4:
    // 0x3b2ee4: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x3b2ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3b2ee8:
    // 0x3b2ee8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x3b2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_3b2eec:
    // 0x3b2eec: 0x304203ff  andi        $v0, $v0, 0x3FF
    ctx->pc = 0x3b2eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1023);
label_3b2ef0:
    // 0x3b2ef0: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x3b2ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_3b2ef4:
    // 0x3b2ef4: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x3b2ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_3b2ef8:
    // 0x3b2ef8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3b2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3b2efc:
    // 0x3b2efc: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_3b2f00:
    if (ctx->pc == 0x3B2F00u) {
        ctx->pc = 0x3B2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EFCu;
        // 0x3b2f00: 0x24860014  addiu       $a2, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F04u;
        goto label_3b2f04;
    }
    ctx->pc = 0x3B2EFCu;
    {
        const bool branch_taken_0x3b2efc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2EFCu;
        // 0x3b2f00: 0x24860014  addiu       $a2, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2efc) {
            ctx->pc = 0x3B2F10u;
            goto label_3b2f10;
        }
    }
    ctx->pc = 0x3B2F04u;
label_3b2f04:
    // 0x3b2f04: 0x30e2001f  andi        $v0, $a3, 0x1F
    ctx->pc = 0x3b2f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)31);
label_3b2f08:
    // 0x3b2f08: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_3b2f0c:
    if (ctx->pc == 0x3B2F0Cu) {
        ctx->pc = 0x3B2F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F08u;
        // 0x3b2f0c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F10u;
        goto label_3b2f10;
    }
    ctx->pc = 0x3B2F08u;
    {
        const bool branch_taken_0x3b2f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f08) {
            ctx->pc = 0x3B2F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B2F08u;
            // 0x3b2f0c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B2F30u;
            goto label_3b2f30;
        }
    }
    ctx->pc = 0x3B2F10u;
label_3b2f10:
    // 0x3b2f10: 0x0  nop
    ctx->pc = 0x3b2f10u;
    // NOP
label_3b2f14:
    // 0x3b2f14: 0x0  nop
    ctx->pc = 0x3b2f14u;
    // NOP
label_3b2f18:
    // 0x3b2f18: 0x0  nop
    ctx->pc = 0x3b2f18u;
    // NOP
label_3b2f1c:
    // 0x3b2f1c: 0x0  nop
    ctx->pc = 0x3b2f1cu;
    // NOP
label_3b2f20:
    // 0x3b2f20: 0x0  nop
    ctx->pc = 0x3b2f20u;
    // NOP
label_3b2f24:
    // 0x3b2f24: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_3b2f28:
    if (ctx->pc == 0x3B2F28u) {
        ctx->pc = 0x3B2F2Cu;
        goto label_3b2f2c;
    }
    ctx->pc = 0x3B2F24u;
    {
        const bool branch_taken_0x3b2f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2f24) {
            ctx->pc = 0x3B2F10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b2f10;
        }
    }
    ctx->pc = 0x3B2F2Cu;
label_3b2f2c:
    // 0x3b2f2c: 0x0  nop
    ctx->pc = 0x3b2f2cu;
    // NOP
label_3b2f30:
    // 0x3b2f30: 0xc0ed6f4  jal         func_3B5BD0
label_3b2f34:
    if (ctx->pc == 0x3B2F34u) {
        ctx->pc = 0x3B2F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F30u;
        // 0x3b2f34: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F38u;
        goto label_3b2f38;
    }
    ctx->pc = 0x3B2F30u;
    SET_GPR_U32(ctx, 31, 0x3B2F38u);
    ctx->pc = 0x3B2F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2F30u;
    // 0x3b2f34: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5BD0u, 0x3B2F30u, 0x3B2F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2F38u;
label_3b2f38:
    // 0x3b2f38: 0x2113821  addu        $a3, $s0, $s1
    ctx->pc = 0x3b2f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3b2f3c:
    // 0x3b2f3c: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x3b2f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_3b2f40:
    // 0x3b2f40: 0x24e70014  addiu       $a3, $a3, 0x14
    ctx->pc = 0x3b2f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_3b2f44:
    // 0x3b2f44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b2f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b2f48:
    // 0x3b2f48: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b2f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b2f4c:
    // 0x3b2f4c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x3b2f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3b2f50:
    // 0x3b2f50: 0x41183  sra         $v0, $a0, 6
    ctx->pc = 0x3b2f50u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 6));
label_3b2f54:
    // 0x3b2f54: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3b2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_3b2f58:
    // 0x3b2f58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3b2f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3b2f5c:
    // 0x3b2f5c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3b2f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
label_3b2f60:
    // 0x3b2f60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3b2f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3b2f64:
    // 0x3b2f64: 0x8c634e60  lw          $v1, 0x4E60($v1)
    ctx->pc = 0x3b2f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20064)));
label_3b2f68:
    // 0x3b2f68: 0x60f809  jalr        $v1
label_3b2f6c:
    if (ctx->pc == 0x3B2F6Cu) {
        ctx->pc = 0x3B2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F68u;
        // 0x3b2f6c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F70u;
        goto label_3b2f70;
    }
    ctx->pc = 0x3B2F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B2F70u);
        ctx->pc = 0x3B2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F68u;
        // 0x3b2f6c: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2F68u, 0x3B2F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B2F70u;
label_3b2f70:
    // 0x3b2f70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b2f74:
    // 0x3b2f74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b2f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3b2f78:
    // 0x3b2f78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b2f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2f7c:
    // 0x3b2f7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b2f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3b2f80:
    // 0x3b2f80: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3b2f80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3b2f84:
    // 0x3b2f84: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3b2f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_3b2f88:
    // 0x3b2f88: 0x3e00008  jr          $ra
label_3b2f8c:
    if (ctx->pc == 0x3B2F8Cu) {
        ctx->pc = 0x3B2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F88u;
        // 0x3b2f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B2F90u;
        goto label_fallthrough_0x3b2f88;
    }
    ctx->pc = 0x3B2F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2F88u;
        // 0x3b2f8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3b2f88:
    ctx->pc = 0x3B2F90u;
}
