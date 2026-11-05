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

// Function: sub_0037BC58
// Address: 0x37bc58 - 0x37c380
void sub_0037BC58_0x37bc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037BC58_0x37bc58");
#endif

    switch (ctx->pc) {
        case 0x37bc74u: goto label_37bc74;
        case 0x37bc78u: goto label_37bc78;
        case 0x37bed0u: goto label_37bed0;
        case 0x37bf40u: goto label_37bf40;
        case 0x37bf90u: goto label_37bf90;
        case 0x37c010u: goto label_37c010;
        case 0x37c068u: goto label_37c068;
        default: break;
    }

    ctx->pc = 0x37bc58u;

    // 0x37bc58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37bc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37bc5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37bc60: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x37bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x37bc64: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37bc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37bc68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x37BC68u;
    {
        const bool branch_taken_0x37bc68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC68u;
        // 0x37bc6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bc68) {
            ctx->pc = 0x37BC7Cu;
            goto label_37bc7c;
        }
    }
    ctx->pc = 0x37BC70u;
    // 0x37bc70: 0xc0dee88  jal         func_37BA20
label_37bc74:
    if (ctx->pc == 0x37BC74u) {
        ctx->pc = 0x37BC78u;
        goto label_37bc78;
    }
    ctx->pc = 0x37BC70u;
    SET_GPR_U32(ctx, 31, 0x37BC78u);
    ctx->pc = 0x37BA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BA20u, 0x37BC70u, 0x37BC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC78u;
label_37bc78:
    // 0x37bc78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37bc78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_37bc7c:
    // 0x37bc7c: 0x3e00008  jr          $ra
    ctx->pc = 0x37BC7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC7Cu;
        // 0x37bc80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BC7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BC84u;
    // 0x37bc84: 0x0  nop
    ctx->pc = 0x37bc84u;
    // NOP
    // 0x37bc88: 0x0  nop
    ctx->pc = 0x37bc88u;
    // NOP
    // 0x37bc8c: 0x0  nop
    ctx->pc = 0x37bc8cu;
    // NOP
    // 0x37bc90: 0x1e40802  .word       0x01E40802                   # srl         $at, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bc90u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x37bc94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bc94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bc98: 0x1e50803  .word       0x01E50803                   # sra         $at, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bc98u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 5), 0));
    // 0x37bc9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bc9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bca0: 0x1e60804  sllv        $at, $a2, $t7
    ctx->pc = 0x37bca0u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x37bca4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bca4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bca8: 0x1e10000  .word       0x01E10000                   # sll         $zero, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bca8u;
    
    // 0x37bcac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcb0: 0x1e20001  .word       0x01E20001                   # INVALID     $t7, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bcb0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37BCB0 raw=0x01E20001");
    // 0x37bcb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcb8: 0x1e30002  .word       0x01E30002                   # srl         $zero, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bcb8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
    // 0x37bcbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcc0: 0x81c00f3f  lb          $zero, 0xF3F($t6)
    ctx->pc = 0x37bcc0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 3903)));
    // 0x37bcc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcc8: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37bcc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
    // 0x37bccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcd0: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37bcd0u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
    // 0x37bcd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bcd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bcdc: 0x1df086a  .word       0x01DF086A                   # slt         $at, $t6, $ra # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bcdcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
    // 0x37bce0: 0x81c0173f  lb          $zero, 0x173F($t6)
    ctx->pc = 0x37bce0u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 5951)));
    // 0x37bce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bce8: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37bce8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
    // 0x37bcec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcf0: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37bcf0u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
    // 0x37bcf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bcf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bcf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bcf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bcfc: 0x1df10aa  .word       0x01DF10AA                   # slt         $v0, $t6, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bcfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
    // 0x37bd00: 0x81c01f3f  lb          $zero, 0x1F3F($t6)
    ctx->pc = 0x37bd00u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 7999)));
    // 0x37bd04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd08: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37bd08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
    // 0x37bd0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd10: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37bd10u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
    // 0x37bd14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd1c: 0x1df18ea  .word       0x01DF18EA                   # slt         $v1, $t6, $ra # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
    // 0x37bd20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd24: 0x18121bc  .word       0x018121BC                   # dsll32      $a0, $at, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37bd28: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd2c: 0x18128bd  .word       0x018128BD                   # INVALID     $t4, $at, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BD2C raw=0x018128BD");
    // 0x37bd30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd34: 0x181374a  .word       0x0181374A                   # movz        $a2, $t4, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd34u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
    // 0x37bd38: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd38u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd3c: 0x18221bc  .word       0x018221BC                   # dsll32      $a0, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37bd40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd44: 0x18228bd  .word       0x018228BD                   # INVALID     $t4, $v0, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BD44 raw=0x018228BD");
    // 0x37bd48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd4c: 0x182378a  .word       0x0182378A                   # movz        $a2, $t4, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd4cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
    // 0x37bd50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd54: 0x18321bc  .word       0x018321BC                   # dsll32      $a0, $v1, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37bd58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd5c: 0x18328bd  .word       0x018328BD                   # INVALID     $t4, $v1, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BD5C raw=0x018328BD");
    // 0x37bd60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bd60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bd64: 0x18337ca  .word       0x018337CA                   # movz        $a2, $t4, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd64u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
    // 0x37bd68: 0x3e1e805  .word       0x03E1E805                   # INVALID     $ra, $at, -0x17FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd68u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37BD68 raw=0x03E1E805");
    // 0x37bd6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd70: 0x3e1f006  srlv        $fp, $at, $ra
    ctx->pc = 0x37bd70u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 31) & 0x1F));
    // 0x37bd74: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd78: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37bd78u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37BD78 raw=0x48007800");
    // 0x37bd7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd80: 0x3e1f807  srav        $ra, $at, $ra
    ctx->pc = 0x37bd80u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 31) & 0x1F));
    // 0x37bd84: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd88: 0x1e10802  .word       0x01E10802                   # srl         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bd88u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
    // 0x37bd8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd90: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37bd90u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37bd94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bd98: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37bd98u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37bd9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bd9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bda0: 0x10020016  beq         $zero, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x37BDA0u;
    {
        const bool branch_taken_0x37bda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37BDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDA0u;
        // 0x37bda4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bda0) {
            ctx->pc = 0x37BDFCu;
            goto label_37bdfc;
        }
    }
    ctx->pc = 0x37BDA8u;
    // 0x37bda8: 0x804113fd  lb          $at, 0x13FD($v0)
    ctx->pc = 0x37bda8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5117)));
    // 0x37bdac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bdb0: 0x3e10801  .word       0x03E10801                   # INVALID     $ra, $at, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bdb0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37BDB0 raw=0x03E10801");
    // 0x37bdb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bdb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bdb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bdbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bdc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bdc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bdc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bdc8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37bdc8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37BDC8 raw=0x48007800");
    // 0x37bdcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bdd0: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x37bdd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x37bdd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bdd8: 0x1e10803  .word       0x01E10803                   # sra         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bdd8u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 0));
    // 0x37bddc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bddcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bde0: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37bde0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37bde4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bde4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bde8: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37bde8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37bdec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bdf0: 0x10020017  beq         $zero, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37BDF0u;
    {
        const bool branch_taken_0x37bdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37BDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BDF0u;
        // 0x37bdf4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bdf0) {
            ctx->pc = 0x37BE50u;
            goto label_37be50;
        }
    }
    ctx->pc = 0x37BDF8u;
    // 0x37bdf8: 0x804113fd  lb          $at, 0x13FD($v0)
    ctx->pc = 0x37bdf8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5117)));
label_37bdfc:
    // 0x37bdfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bdfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be00: 0x3e10801  .word       0x03E10801                   # INVALID     $ra, $at, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37be00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37BE00 raw=0x03E10801");
    // 0x37be04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be08: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37be08u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37be0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37be10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37be14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be18: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37be18u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37BE18 raw=0x48007800");
    // 0x37be1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be20: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x37be20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x37be24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be28: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x37be28u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x37be2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be30: 0x3b800000  xori        $zero, $gp, 0x0
    ctx->pc = 0x37be30u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 28) ^ (uint64_t)(uint16_t)0);
    // 0x37be34: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37be34u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37be38: 0x1fd0805  .word       0x01FD0805                   # INVALID     $t7, $sp, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37be38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37BE38 raw=0x01FD0805");
    // 0x37be3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be40: 0x1fe0806  srlv        $at, $fp, $t7
    ctx->pc = 0x37be40u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 30), GPR_U32(ctx, 15) & 0x1F));
    // 0x37be44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be48: 0x1ff0807  srav        $at, $ra, $t7
    ctx->pc = 0x37be48u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 31), GPR_U32(ctx, 15) & 0x1F));
    // 0x37be4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37be50:
    // 0x37be50: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x37be50u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
    // 0x37be54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be58: 0x8440034  j           func_11000D0
    ctx->pc = 0x37BE58u;
    ctx->pc = 0x37BE5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE58u;
    // 0x37be5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37BE58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37BE60u;
    // 0x37be60: 0x80022134  lb          $v0, 0x2134($zero)
    ctx->pc = 0x37be60u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x2134u));
    // 0x37be64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be68: 0x9030033  j           func_40C00CC
    ctx->pc = 0x37BE68u;
    ctx->pc = 0x37BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE68u;
    // 0x37be6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C00CCu, 0x37BE68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37BE70u;
    // 0x37be70: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37be70u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37be74: 0x180ef5e  .word       0x0180EF5E                   # ddiv        $sp, $t4, $zero # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37be74u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37BE74 raw=0x0180EF5E");
    // 0x37be78: 0x8810033  j           func_20400CC
    ctx->pc = 0x37BE78u;
    ctx->pc = 0x37BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE78u;
    // 0x37be7c: 0x180f79e  .word       0x0180F79E                   # ddiv        $fp, $t4, $zero # 00000780 <InstrIdType: CPU_SPECIAL> (Delay Slot)
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37BE7C raw=0x0180F79E");
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400CCu, 0x37BE78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37BE80u;
    // 0x37be80: 0x80040870  lb          $a0, 0x870($zero)
    ctx->pc = 0x37be80u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x870u));
    // 0x37be84: 0x180ffde  .word       0x0180FFDE                   # ddiv        $ra, $t4, $zero # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37be84u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37BE84 raw=0x0180FFDE");
    // 0x37be88: 0x8240034  j           func_9000D0
    ctx->pc = 0x37BE88u;
    ctx->pc = 0x37BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BE88u;
    // 0x37be8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37BE88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37BE90u;
    // 0x37be90: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37be90u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37be94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37be94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37be98: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
    ctx->pc = 0x37BE98u;
    {
        const bool branch_taken_0x37be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37BE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BE98u;
        // 0x37be9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37be98) {
            ctx->pc = 0x37FEA0u;
            return;
        }
    }
    ctx->pc = 0x37BEA0u;
    // 0x37bea0: 0x8431fff  j           func_10C7FFC
    ctx->pc = 0x37BEA0u;
    ctx->pc = 0x37BEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEA0u;
    // 0x37bea4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C7FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C7FFCu, 0x37BEA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37BEA8u;
    // 0x37bea8: 0x12081806  beq         $s0, $t0, . + 4 + (0x1806 << 2)
    ctx->pc = 0x37BEA8u;
    {
        const bool branch_taken_0x37bea8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37BEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEA8u;
        // 0x37beac: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bea8) {
            ctx->pc = 0x381EC4u;
            return;
        }
    }
    ctx->pc = 0x37BEB0u;
    // 0x37beb0: 0x3f000000  .word       0x3F000000                   # lui         $zero, 0x0 # 03000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x37beb0u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x37beb4: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37beb4u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37beb8: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37BEB8u;
    {
        const bool branch_taken_0x37beb8 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37beb8) {
            ctx->pc = 0x37BEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BEB8u;
            // 0x37bebc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38BEC4u;
            return;
        }
    }
    ctx->pc = 0x37BEC0u;
    // 0x37bec0: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37bec0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37bec4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37bec4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37bec8: 0x10030006  beq         $zero, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x37BEC8u;
    {
        const bool branch_taken_0x37bec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x37BECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BEC8u;
        // 0x37becc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bec8) {
            ctx->pc = 0x37BEE4u;
            goto label_37bee4;
        }
    }
    ctx->pc = 0x37BED0u;
label_37bed0:
    // 0x37bed0: 0x800308f0  lb          $v1, 0x8F0($zero)
    ctx->pc = 0x37bed0u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x8F0u));
    // 0x37bed4: 0x1800722  .word       0x01800722                   # sub         $zero, $t4, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bed4u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 12), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    // 0x37bed8: 0x12031802  beq         $s0, $v1, . + 4 + (0x1802 << 2)
    ctx->pc = 0x37BED8u;
    {
        const bool branch_taken_0x37bed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x37BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BED8u;
        // 0x37bedc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bed8) {
            ctx->pc = 0x381EE4u;
            return;
        }
    }
    ctx->pc = 0x37BEE0u;
    // 0x37bee0: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37bee0u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
label_37bee4:
    // 0x37bee4: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
    // 0x37bee8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bee8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37beec: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37beecu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37bef0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bef0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bef4: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bef4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BEF4 raw=0x0182F0BD");
    // 0x37bef8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bef8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37befc: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37befcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37bf00: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37bf00u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37bf04: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf04u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
    // 0x37bf08: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37bf0c: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37bf0cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37bf10: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bf10u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bf14: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf14u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37bf18: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bf18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bf1c: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BF1C raw=0x0182F0BD");
    // 0x37bf20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bf20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bf24: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf24u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37bf28: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37bf28u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37bf2c: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
    // 0x37bf30: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37bf30u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37bf34: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf34u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37bf38: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37bf3c: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37bf3cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
label_37bf40:
    // 0x37bf40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bf40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bf44: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf44u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37bf48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bf48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bf4c: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf4cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BF4C raw=0x0182F0BD");
    // 0x37bf50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bf50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bf54: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37bf58: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37bf58u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37bf5c: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
    // 0x37bf60: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf60u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BF60 raw=0x038237FD");
    // 0x37bf64: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf64u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37bf68: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37bf68u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37bf6c: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37bf6cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37bf70: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37bf74: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf74u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37bf78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bf78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bf7c: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BF7C raw=0x0182F0BD");
    // 0x37bf80: 0x52030ffb  beql        $s0, $v1, . + 4 + (0xFFB << 2)
    ctx->pc = 0x37BF80u;
    {
        const bool branch_taken_0x37bf80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37bf80) {
            ctx->pc = 0x37BF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BF80u;
            // 0x37bf84: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37FF70u;
            return;
        }
    }
    ctx->pc = 0x37BF88u;
    // 0x37bf88: 0x81e10b7c  lb          $at, 0xB7C($t7)
    ctx->pc = 0x37bf88u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37bf8c: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
label_37bf90:
    // 0x37bf90: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf90u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BF90 raw=0x038237FD");
    // 0x37bf94: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bf94u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37bf98: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37bf98u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37bf9c: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37bf9cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37bfa0: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37bfa4: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfa4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37bfa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bfa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bfac: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BFAC raw=0x0182F0BD");
    // 0x37bfb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bfb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bfb4: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfb4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37bfb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bfb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bfbc: 0x1c2093c  .word       0x01C2093C                   # dsll32      $at, $v0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfbcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 2) << (32 + 4));
    // 0x37bfc0: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfc0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BFC0 raw=0x038237FD");
    // 0x37bfc4: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfc4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37bfc8: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37bfc8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37bfcc: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37bfccu;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37bfd0: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37bfd4: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfd4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37bfd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37bfd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37bfdc: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfdcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BFDC raw=0x0182F0BD");
    // 0x37bfe0: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfe0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BFE0 raw=0x038237FD");
    // 0x37bfe4: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfe4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37bfe8: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37bfe8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37bfec: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bfecu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37bff0: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37bff4: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37bff4u;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37bff8: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bff8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37BFF8 raw=0x038237FD");
    // 0x37bffc: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37bffcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c000: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37c000u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37C000 raw=0x48007800");
    // 0x37c004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c008: 0x3823000  .word       0x03823000                   # sll         $a2, $v0, 0 # 03800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c008u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x37c00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37c010:
    // 0x37c010: 0x1e40802  .word       0x01E40802                   # srl         $at, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c010u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 4), 0));
    // 0x37c014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c018: 0x1e50803  .word       0x01E50803                   # sra         $at, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c018u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 5), 0));
    // 0x37c01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c020: 0x1e60804  sllv        $at, $a2, $t7
    ctx->pc = 0x37c020u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 15) & 0x1F));
    // 0x37c024: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c024u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c028: 0x1e10000  .word       0x01E10000                   # sll         $zero, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c028u;
    
    // 0x37c02c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c02cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c030: 0x1e20001  .word       0x01E20001                   # INVALID     $t7, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c030u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37C030 raw=0x01E20001");
    // 0x37c034: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c034u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c038: 0x1e30002  .word       0x01E30002                   # srl         $zero, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c038u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
    // 0x37c03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c040: 0x81c00f3f  lb          $zero, 0xF3F($t6)
    ctx->pc = 0x37c040u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 3903)));
    // 0x37c044: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c044u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c048: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37c048u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
    // 0x37c04c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c04cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c050: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37c050u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
    // 0x37c054: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c054u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c058: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c058u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c05c: 0x1df086a  .word       0x01DF086A                   # slt         $at, $t6, $ra # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c05cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
    // 0x37c060: 0x81c0173f  lb          $zero, 0x173F($t6)
    ctx->pc = 0x37c060u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 5951)));
    // 0x37c064: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c064u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37c068:
    // 0x37c068: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37c068u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
    // 0x37c06c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c06cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c070: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37c070u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
    // 0x37c074: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c074u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c078: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c07c: 0x1df10aa  .word       0x01DF10AA                   # slt         $v0, $t6, $ra # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c07cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
    // 0x37c080: 0x81c01f3f  lb          $zero, 0x1F3F($t6)
    ctx->pc = 0x37c080u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 7999)));
    // 0x37c084: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c084u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c088: 0x800007bf  lb          $zero, 0x7BF($zero)
    ctx->pc = 0x37c088u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x7BFu));
    // 0x37c08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c090: 0x81df067c  lb          $ra, 0x67C($t6)
    ctx->pc = 0x37c090u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 14), 1660)));
    // 0x37c094: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c094u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c098: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c098u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c09c: 0x1df18ea  .word       0x01DF18EA                   # slt         $v1, $t6, $ra # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c09cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 31)) ? 1 : 0);
    // 0x37c0a0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0a4: 0x18121bc  .word       0x018121BC                   # dsll32      $a0, $at, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37c0a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0ac: 0x18128bd  .word       0x018128BD                   # INVALID     $t4, $at, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0acu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C0AC raw=0x018128BD");
    // 0x37c0b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0b4: 0x181374a  .word       0x0181374A                   # movz        $a2, $t4, $at # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0b4u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
    // 0x37c0b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0bc: 0x18221bc  .word       0x018221BC                   # dsll32      $a0, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37c0c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0c4: 0x18228bd  .word       0x018228BD                   # INVALID     $t4, $v0, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0c4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C0C4 raw=0x018228BD");
    // 0x37c0c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0cc: 0x182378a  .word       0x0182378A                   # movz        $a2, $t4, $v0 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
    // 0x37c0d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0d4: 0x18321bc  .word       0x018321BC                   # dsll32      $a0, $v1, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 6));
    // 0x37c0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0dc: 0x18328bd  .word       0x018328BD                   # INVALID     $t4, $v1, 0x28BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0dcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C0DC raw=0x018328BD");
    // 0x37c0e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c0e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c0e4: 0x18337ca  .word       0x018337CA                   # movz        $a2, $t4, $v1 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0e4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 12));
    // 0x37c0e8: 0x3e1e805  .word       0x03E1E805                   # INVALID     $ra, $at, -0x17FB # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c0e8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37C0E8 raw=0x03E1E805");
    // 0x37c0ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c0ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c0f0: 0x3e1f006  srlv        $fp, $at, $ra
    ctx->pc = 0x37c0f0u;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 1), GPR_U32(ctx, 31) & 0x1F));
    // 0x37c0f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c0f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c0f8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37c0f8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37C0F8 raw=0x48007800");
    // 0x37c0fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c0fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c100: 0x3e1f807  srav        $ra, $at, $ra
    ctx->pc = 0x37c100u;
    SET_GPR_S32(ctx, 31, SRA32(GPR_S32(ctx, 1), GPR_U32(ctx, 31) & 0x1F));
    // 0x37c104: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c104u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c108: 0x1e10802  .word       0x01E10802                   # srl         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c108u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 1), 0));
    // 0x37c10c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c10cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c110: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37c110u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37c114: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c114u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c118: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37c118u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37c11c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c11cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c120: 0x10020016  beq         $zero, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x37C120u;
    {
        const bool branch_taken_0x37c120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C120u;
        // 0x37c124: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c120) {
            ctx->pc = 0x37C17Cu;
            goto label_37c17c;
        }
    }
    ctx->pc = 0x37C128u;
    // 0x37c128: 0x804113fd  lb          $at, 0x13FD($v0)
    ctx->pc = 0x37c128u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5117)));
    // 0x37c12c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c12cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c130: 0x3e10801  .word       0x03E10801                   # INVALID     $ra, $at, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c130u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37C130 raw=0x03E10801");
    // 0x37c134: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c134u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c138: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c138u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c13c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c13cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c140: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c140u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c144: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c144u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c148: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37c148u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37C148 raw=0x48007800");
    // 0x37c14c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c14cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c150: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x37c150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x37c154: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c154u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c158: 0x1e10803  .word       0x01E10803                   # sra         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c158u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 1), 0));
    // 0x37c15c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c15cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c160: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37c160u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37c164: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c164u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c168: 0x81e10b3d  lb          $at, 0xB3D($t7)
    ctx->pc = 0x37c168u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2877)));
    // 0x37c16c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c16cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c170: 0x10020017  beq         $zero, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x37C170u;
    {
        const bool branch_taken_0x37c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C170u;
        // 0x37c174: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c170) {
            ctx->pc = 0x37C1D0u;
            goto label_37c1d0;
        }
    }
    ctx->pc = 0x37C178u;
    // 0x37c178: 0x804113fd  lb          $at, 0x13FD($v0)
    ctx->pc = 0x37c178u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5117)));
label_37c17c:
    // 0x37c17c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c17cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c180: 0x3e10801  .word       0x03E10801                   # INVALID     $ra, $at, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c180u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37C180 raw=0x03E10801");
    // 0x37c184: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c184u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c188: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c188u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c18c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c18cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c190: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c190u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c194: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c194u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c198: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37c198u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37C198 raw=0x48007800");
    // 0x37c19c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c19cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1a0: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x37c1a0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x37c1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1a8: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x37c1a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x37c1ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1b0: 0x1fd0805  .word       0x01FD0805                   # INVALID     $t7, $sp, 0x805 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c1b0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x5 at 0x37C1B0 raw=0x01FD0805");
    // 0x37c1b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1b8: 0x1fe0806  srlv        $at, $fp, $t7
    ctx->pc = 0x37c1b8u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 30), GPR_U32(ctx, 15) & 0x1F));
    // 0x37c1bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1c0: 0x1ff0807  srav        $at, $ra, $t7
    ctx->pc = 0x37c1c0u;
    SET_GPR_S32(ctx, 1, SRA32(GPR_S32(ctx, 31), GPR_U32(ctx, 15) & 0x1F));
    // 0x37c1c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1c8: 0x800206bc  lb          $v0, 0x6BC($zero)
    ctx->pc = 0x37c1c8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x6BCu));
    // 0x37c1cc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1ccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
label_37c1d0:
    // 0x37c1d0: 0x8440034  j           func_11000D0
    ctx->pc = 0x37C1D0u;
    ctx->pc = 0x37C1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C1D0u;
    // 0x37c1d4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37C1D0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C1D8u;
    // 0x37c1d8: 0x80022134  lb          $v0, 0x2134($zero)
    ctx->pc = 0x37c1d8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x2134u));
    // 0x37c1dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1e0: 0x9030033  j           func_40C00CC
    ctx->pc = 0x37C1E0u;
    ctx->pc = 0x37C1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C1E0u;
    // 0x37c1e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40C00CCu, 0x37C1E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C1E8u;
    // 0x37c1e8: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37c1e8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37c1ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c1f0: 0x8810033  j           func_20400CC
    ctx->pc = 0x37C1F0u;
    ctx->pc = 0x37C1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C1F0u;
    // 0x37c1f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20400CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20400CCu, 0x37C1F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C1F8u;
    // 0x37c1f8: 0x80040870  lb          $a0, 0x870($zero)
    ctx->pc = 0x37c1f8u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x870u));
    // 0x37c1fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c1fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c200: 0x8240034  j           func_9000D0
    ctx->pc = 0x37C200u;
    ctx->pc = 0x37C204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C200u;
    // 0x37c204: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37C200u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C208u;
    // 0x37c208: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37c208u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37c20c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c20cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c210: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
    ctx->pc = 0x37C210u;
    {
        const bool branch_taken_0x37c210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x37C214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C210u;
        // 0x37c214: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c210) {
            ctx->pc = 0x380218u;
            return;
        }
    }
    ctx->pc = 0x37C218u;
    // 0x37c218: 0x8431fff  j           func_10C7FFC
    ctx->pc = 0x37C218u;
    ctx->pc = 0x37C21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C218u;
    // 0x37c21c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C7FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C7FFCu, 0x37C218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C220u;
    // 0x37c220: 0x12081805  beq         $s0, $t0, . + 4 + (0x1805 << 2)
    ctx->pc = 0x37C220u;
    {
        const bool branch_taken_0x37c220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C220u;
        // 0x37c224: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c220) {
            ctx->pc = 0x382238u;
            return;
        }
    }
    ctx->pc = 0x37C228u;
    // 0x37c228: 0x3f7d70a4  .word       0x3F7D70A4                   # lui         $sp, 0x70A4 # 03600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x37c228u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)28836 << 16));
    // 0x37c22c: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37c22cu;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37c230: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37C230u;
    {
        const bool branch_taken_0x37c230 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37c230) {
            ctx->pc = 0x37C234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C230u;
            // 0x37c234: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38C23Cu;
            return;
        }
    }
    ctx->pc = 0x37C238u;
    // 0x37c238: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x37c238u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c23c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c23cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c240: 0x10030005  beq         $zero, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x37C240u;
    {
        const bool branch_taken_0x37c240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x37C244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C240u;
        // 0x37c244: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c240) {
            ctx->pc = 0x37C258u;
            goto label_37c258;
        }
    }
    ctx->pc = 0x37C248u;
    // 0x37c248: 0x800308f0  lb          $v1, 0x8F0($zero)
    ctx->pc = 0x37c248u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x8F0u));
    // 0x37c24c: 0x1800722  .word       0x01800722                   # sub         $zero, $t4, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c24cu;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 12), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
    // 0x37c250: 0x12031802  beq         $s0, $v1, . + 4 + (0x1802 << 2)
    ctx->pc = 0x37C250u;
    {
        const bool branch_taken_0x37c250 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x37C254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C250u;
        // 0x37c254: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37c250) {
            ctx->pc = 0x38225Cu;
            return;
        }
    }
    ctx->pc = 0x37C258u;
label_37c258:
    // 0x37c258: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c258u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c25c: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c25cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37c260: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c260u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c264: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c264u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C264 raw=0x0182F0BD");
    // 0x37c268: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x37c268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c26c: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c26cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37c270: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c270u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c274: 0x18018ef  .word       0x018018EF                   # dsubu       $v1, $t4, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) - GPR_U64(ctx, 0));
    // 0x37c278: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c278u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37c27c: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c27cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37c280: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c280u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c284: 0x180212b  .word       0x0180212B                   # sltu        $a0, $t4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c284u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x37c288: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c288u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c28c: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c28cu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37c290: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c290u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c294: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c294u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C294 raw=0x0182F0BD");
    // 0x37c298: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x37c298u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c29c: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c29cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37c2a0: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37c2a0u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37c2a4: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2a4u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c2a8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c2a8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c2ac: 0x18018ef  .word       0x018018EF                   # dsubu       $v1, $t4, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) - GPR_U64(ctx, 0));
    // 0x37c2b0: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37c2b4: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c2b4u;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37c2b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c2b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c2bc: 0x180212b  .word       0x0180212B                   # sltu        $a0, $t4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x37c2c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c2c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c2c4: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2c4u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37c2c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c2c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c2cc: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2ccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C2CC raw=0x0182F0BD");
    // 0x37c2d0: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x37c2d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c2d4: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2d4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37c2d8: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2d8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C2D8 raw=0x038237FD");
    // 0x37c2dc: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2dcu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c2e0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c2e0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c2e4: 0x18018ef  .word       0x018018EF                   # dsubu       $v1, $t4, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) - GPR_U64(ctx, 0));
    // 0x37c2e8: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37c2e8u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37c2ec: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c2ecu;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37c2f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c2f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c2f4: 0x180212b  .word       0x0180212B                   # sltu        $a0, $t4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2f4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x37c2f8: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37c2fc: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c2fcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37c300: 0x52030ffa  beql        $s0, $v1, . + 4 + (0xFFA << 2)
    ctx->pc = 0x37C300u;
    {
        const bool branch_taken_0x37c300 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x37c300) {
            ctx->pc = 0x37C304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37C300u;
            // 0x37c304: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C304 raw=0x0182F0BD");
            ctx->in_delay_slot = false;
            ctx->pc = 0x3802ECu;
            return;
        }
    }
    ctx->pc = 0x37C308u;
    // 0x37c308: 0x81e20b7c  lb          $v0, 0xB7C($t7)
    ctx->pc = 0x37c308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 2940)));
    // 0x37c30c: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c30cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37c310: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c310u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C310 raw=0x038237FD");
    // 0x37c314: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c314u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c318: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c318u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c31c: 0x18018ef  .word       0x018018EF                   # dsubu       $v1, $t4, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c31cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) - GPR_U64(ctx, 0));
    // 0x37c320: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37c320u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37c324: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c324u;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37c328: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c328u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c32c: 0x180212b  .word       0x0180212B                   # sltu        $a0, $t4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c32cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x37c330: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37c334: 0x182e9bc  .word       0x0182E9BC                   # dsll32      $sp, $v0, 6 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c334u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 2) << (32 + 6));
    // 0x37c338: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c338u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c33c: 0x182f0bd  .word       0x0182F0BD                   # INVALID     $t4, $v0, -0xF43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c33cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C33C raw=0x0182F0BD");
    // 0x37c340: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c340u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C340 raw=0x038237FD");
    // 0x37c344: 0x182f8ca  .word       0x0182F8CA                   # movz        $ra, $t4, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c344u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 12));
    // 0x37c348: 0x800210f2  lb          $v0, 0x10F2($zero)
    ctx->pc = 0x37c348u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x10F2u));
    // 0x37c34c: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c34cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c350: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c350u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c354: 0x18018ef  .word       0x018018EF                   # dsubu       $v1, $t4, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) - GPR_U64(ctx, 0));
    // 0x37c358: 0x1e51000  .word       0x01E51000                   # sll         $v0, $a1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c358u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 0));
    // 0x37c35c: 0x183e128  .word       0x0183E128                   # mfsa        $gp # 01830100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37c35cu;
    SET_GPR_U32(ctx, 28, ctx->sa);
    // 0x37c360: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37c360u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37c364: 0x180212b  .word       0x0180212B                   # sltu        $a0, $t4, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c364u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 0)) ? 1 : 0);
    // 0x37c368: 0x38237fd  .word       0x038237FD                   # INVALID     $gp, $v0, 0x37FD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c368u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37C368 raw=0x038237FD");
    // 0x37c36c: 0x185219a  .word       0x0185219A                   # div         $a0, $t4, $a1 # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c36cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37c370: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37c370u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37C370 raw=0x48007800");
    // 0x37c374: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c374u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c378: 0x3823000  .word       0x03823000                   # sll         $a2, $v0, 0 # 03800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37c378u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 0));
    // 0x37c37c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c37cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x37c380u;
}
