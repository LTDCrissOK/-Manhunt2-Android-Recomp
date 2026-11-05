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

// Function: sub_00367A78
// Address: 0x367a78 - 0x368638
void sub_00367A78_0x367a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00367A78_0x367a78");
#endif

    switch (ctx->pc) {
        case 0x367ab0u: goto label_367ab0;
        case 0x367ab8u: goto label_367ab8;
        case 0x367ac0u: goto label_367ac0;
        case 0x367b08u: goto label_367b08;
        case 0x367b1cu: goto label_367b1c;
        case 0x367b40u: goto label_367b40;
        case 0x367b60u: goto label_367b60;
        case 0x367bd8u: goto label_367bd8;
        case 0x367c0cu: goto label_367c0c;
        case 0x367c28u: goto label_367c28;
        case 0x367c30u: goto label_367c30;
        case 0x367c3cu: goto label_367c3c;
        case 0x367c58u: goto label_367c58;
        case 0x367c64u: goto label_367c64;
        case 0x367c70u: goto label_367c70;
        case 0x367c7cu: goto label_367c7c;
        case 0x367c8cu: goto label_367c8c;
        case 0x367c98u: goto label_367c98;
        case 0x367ca4u: goto label_367ca4;
        case 0x367cacu: goto label_367cac;
        case 0x367cccu: goto label_367ccc;
        case 0x367ce4u: goto label_367ce4;
        case 0x367d04u: goto label_367d04;
        case 0x367d1cu: goto label_367d1c;
        case 0x367d3cu: goto label_367d3c;
        case 0x367d54u: goto label_367d54;
        case 0x367d80u: goto label_367d80;
        case 0x367d9cu: goto label_367d9c;
        case 0x367dbcu: goto label_367dbc;
        case 0x367dd8u: goto label_367dd8;
        case 0x367e0cu: goto label_367e0c;
        case 0x367e24u: goto label_367e24;
        case 0x367e38u: goto label_367e38;
        case 0x367e44u: goto label_367e44;
        case 0x367e54u: goto label_367e54;
        case 0x367e5cu: goto label_367e5c;
        case 0x367e68u: goto label_367e68;
        case 0x367e8cu: goto label_367e8c;
        case 0x367eacu: goto label_367eac;
        case 0x367ec0u: goto label_367ec0;
        case 0x367eccu: goto label_367ecc;
        case 0x367ed8u: goto label_367ed8;
        case 0x367ee0u: goto label_367ee0;
        case 0x367eecu: goto label_367eec;
        case 0x367f10u: goto label_367f10;
        case 0x367f30u: goto label_367f30;
        case 0x367f3cu: goto label_367f3c;
        case 0x367f44u: goto label_367f44;
        case 0x367f50u: goto label_367f50;
        case 0x367f70u: goto label_367f70;
        case 0x367f90u: goto label_367f90;
        case 0x367fa8u: goto label_367fa8;
        case 0x367fbcu: goto label_367fbc;
        case 0x367fc8u: goto label_367fc8;
        case 0x367fd4u: goto label_367fd4;
        case 0x367fdcu: goto label_367fdc;
        case 0x367fe8u: goto label_367fe8;
        case 0x368028u: goto label_368028;
        case 0x3680a4u: goto label_3680a4;
        case 0x36813cu: goto label_36813c;
        case 0x3681c4u: goto label_3681c4;
        case 0x36824cu: goto label_36824c;
        case 0x3682b4u: goto label_3682b4;
        case 0x368304u: goto label_368304;
        case 0x368354u: goto label_368354;
        case 0x368444u: goto label_368444;
        case 0x36845cu: goto label_36845c;
        case 0x3684acu: goto label_3684ac;
        case 0x368538u: goto label_368538;
        case 0x368548u: goto label_368548;
        case 0x368550u: goto label_368550;
        case 0x368584u: goto label_368584;
        case 0x368594u: goto label_368594;
        case 0x36859cu: goto label_36859c;
        case 0x3685a4u: goto label_3685a4;
        case 0x3685acu: goto label_3685ac;
        case 0x3685c0u: goto label_3685c0;
        case 0x3685e0u: goto label_3685e0;
        case 0x3685ecu: goto label_3685ec;
        case 0x3685f4u: goto label_3685f4;
        case 0x3685fcu: goto label_3685fc;
        default: break;
    }

    ctx->pc = 0x367a78u;

    // 0x367a78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x367a78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x367a7c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x367a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x367a80: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x367a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x367a84: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x367a84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x367a88: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x367a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x367a8c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x367a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x367a90: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x367a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x367a94: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x367a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x367a98: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x367a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x367a9c: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x367a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x367aa0: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x367aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x367aa4: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x367aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x367aa8: 0xc0dcc22  jal         func_373088
    ctx->pc = 0x367AA8u;
    SET_GPR_U32(ctx, 31, 0x367AB0u);
    ctx->pc = 0x367AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AA8u;
    // 0x367aac: 0xe7b400b0  swc1        $f20, 0xB0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x373088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373088u, 0x367AA8u, 0x367AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AB0u;
label_367ab0:
    // 0x367ab0: 0xc0dcc2a  jal         func_3730A8
    ctx->pc = 0x367AB0u;
    SET_GPR_U32(ctx, 31, 0x367AB8u);
    ctx->pc = 0x367AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AB0u;
    // 0x367ab4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3730A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3730A8u, 0x367AB0u, 0x367AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AB8u;
label_367ab8:
    // 0x367ab8: 0xc0dcc44  jal         func_373110
    ctx->pc = 0x367AB8u;
    SET_GPR_U32(ctx, 31, 0x367AC0u);
    ctx->pc = 0x367ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367AB8u;
    // 0x367abc: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373110u, 0x367AB8u, 0x367AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367AC0u;
label_367ac0:
    // 0x367ac0: 0x292c0  sll         $s2, $v0, 11
    ctx->pc = 0x367ac0u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
    // 0x367ac4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x367ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x367ac8: 0x2463dd50  addiu       $v1, $v1, -0x22B0
    ctx->pc = 0x367ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958416));
    // 0x367acc: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x367accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x367ad0: 0x2442f8c0  addiu       $v0, $v0, -0x740
    ctx->pc = 0x367ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965440));
    // 0x367ad4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x367ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x367ad8: 0x2484de60  addiu       $a0, $a0, -0x21A0
    ctx->pc = 0x367ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
    // 0x367adc: 0xffa20038  sd          $v0, 0x38($sp)
    ctx->pc = 0x367adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 2));
    // 0x367ae0: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367ae4: 0x24a5df70  addiu       $a1, $a1, -0x2090
    ctx->pc = 0x367ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958960));
    // 0x367ae8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367aec: 0x2442e080  addiu       $v0, $v0, -0x1F80
    ctx->pc = 0x367aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959232));
    // 0x367af0: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x367af0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x367af4: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x367af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
    // 0x367af8: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x367af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367afc: 0xffa40048  sd          $a0, 0x48($sp)
    ctx->pc = 0x367afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 4));
    // 0x367b00: 0xffa50040  sd          $a1, 0x40($sp)
    ctx->pc = 0x367b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 5));
    // 0x367b04: 0xffa20030  sd          $v0, 0x30($sp)
    ctx->pc = 0x367b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 2));
label_367b08:
    // 0x367b08: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x367b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x367b0c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x367b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x367b10: 0x2464f910  addiu       $a0, $v1, -0x6F0
    ctx->pc = 0x367b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965520));
    // 0x367b14: 0xc0dc4a0  jal         func_371280
    ctx->pc = 0x367B14u;
    SET_GPR_U32(ctx, 31, 0x367B1Cu);
    ctx->pc = 0x367B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367B14u;
    // 0x367b18: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371280u, 0x367B14u, 0x367B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367B1Cu;
label_367b1c:
    // 0x367b1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x367b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x367b20: 0x601fff9  bgez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x367B20u;
    {
        const bool branch_taken_0x367b20 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x367B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367B20u;
        // 0x367b24: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367b20) {
            ctx->pc = 0x367B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367b08;
        }
    }
    ctx->pc = 0x367B28u;
    // 0x367b28: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367b2c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x367b2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b30: 0x245ee178  addiu       $fp, $v0, -0x1E88
    ctx->pc = 0x367b30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959480));
    // 0x367b34: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x367b34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b38: 0x3c16005c  lui         $s6, 0x5C
    ctx->pc = 0x367b38u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)92 << 16));
    // 0x367b3c: 0x38080  sll         $s0, $v1, 2
    ctx->pc = 0x367b3cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_367b40:
    // 0x367b40: 0x31280  sll         $v0, $v1, 10
    ctx->pc = 0x367b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x367b44: 0x2f05021  addu        $t2, $s7, $s0
    ctx->pc = 0x367b44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x367b48: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x367b48u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x367b4c: 0x5e4021  addu        $t0, $v0, $fp
    ctx->pc = 0x367b4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x367b50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x367b50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x367b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367b58: 0x125983  sra         $t3, $s2, 6
    ctx->pc = 0x367b58u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 18), 6));
    // 0x367b5c: 0x26530100  addiu       $s3, $s2, 0x100
    ctx->pc = 0x367b5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 256));
label_367b60:
    // 0x367b60: 0x3122001f  andi        $v0, $t1, 0x1F
    ctx->pc = 0x367b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)31);
    // 0x367b64: 0x24e40008  addiu       $a0, $a3, 0x8
    ctx->pc = 0x367b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x367b68: 0x38430008  xori        $v1, $v0, 0x8
    ctx->pc = 0x367b68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
    // 0x367b6c: 0x38450010  xori        $a1, $v0, 0x10
    ctx->pc = 0x367b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x367b70: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x367b70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x367b74: 0x38420018  xori        $v0, $v0, 0x18
    ctx->pc = 0x367b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)24);
    // 0x367b78: 0x24e3fff0  addiu       $v1, $a3, -0x10
    ctx->pc = 0x367b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967280));
    // 0x367b7c: 0x8d440000  lw          $a0, 0x0($t2)
    ctx->pc = 0x367b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x367b80: 0x65380a  movz        $a3, $v1, $a1
    ctx->pc = 0x367b80u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x367b84: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x367b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x367b88: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x367b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x367b8c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x367b8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x367b90: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x367b90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x367b94: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x367b94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x367b98: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x367b98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x367b9c: 0x29230100  slti        $v1, $t1, 0x100
    ctx->pc = 0x367b9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x367ba0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x367ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x367ba4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x367ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x367ba8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x367BA8u;
    {
        const bool branch_taken_0x367ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x367BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BA8u;
        // 0x367bac: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367ba8) {
            ctx->pc = 0x367B60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367b60;
        }
    }
    ctx->pc = 0x367BB0u;
    // 0x367bb0: 0x8ec2f910  lw          $v0, -0x6F0($s6)
    ctx->pc = 0x367bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294965520)));
    // 0x367bb4: 0x26d1f910  addiu       $s1, $s6, -0x6F0
    ctx->pc = 0x367bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294965520));
    // 0x367bb8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x367bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x367bbc: 0x3b01821  addu        $v1, $sp, $s0
    ctx->pc = 0x367bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
    // 0x367bc0: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x367bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x367bc4: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x367bc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x367bc8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x367BC8u;
    {
        const bool branch_taken_0x367bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367BC8u;
        // 0x367bcc: 0xac6b0000  sw          $t3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367bc8) {
            ctx->pc = 0x367BD8u;
            goto label_367bd8;
        }
    }
    ctx->pc = 0x367BD0u;
    // 0x367bd0: 0xc0dc442  jal         func_371108
    ctx->pc = 0x367BD0u;
    SET_GPR_U32(ctx, 31, 0x367BD8u);
    ctx->pc = 0x367BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367BD0u;
    // 0x367bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x367BD0u, 0x367BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367BD8u;
label_367bd8:
    // 0x367bd8: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367bdc: 0x2b01021  addu        $v0, $s5, $s0
    ctx->pc = 0x367bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x367be0: 0x8ca4f910  lw          $a0, -0x6F0($a1)
    ctx->pc = 0x367be0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5BF910u));
    // 0x367be4: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x367be4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367be8: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x367be8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x367bec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x367becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367bf0: 0x24820080  addiu       $v0, $a0, 0x80
    ctx->pc = 0x367bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x367bf4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x367bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x367bf8: 0xaca2f910  sw          $v0, -0x6F0($a1)
    ctx->pc = 0x367bf8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x367bfc: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x367bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x367c00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x367c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c04: 0xc0df46e  jal         func_37D1B8
    ctx->pc = 0x367C04u;
    SET_GPR_U32(ctx, 31, 0x367C0Cu);
    ctx->pc = 0x367C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C04u;
    // 0x367c08: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D1B8u, 0x367C04u, 0x367C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C0Cu;
label_367c0c:
    // 0x367c0c: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x367c0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c10: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x367c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x367c14: 0x5440ffca  bnel        $v0, $zero, . + 4 + (-0x36 << 2)
    ctx->pc = 0x367C14u;
    {
        const bool branch_taken_0x367c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367c14) {
            ctx->pc = 0x367C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367C14u;
            // 0x367c18: 0x38080  sll         $s0, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x367B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_367b40;
        }
    }
    ctx->pc = 0x367C1Cu;
    // 0x367c1c: 0x220f02d  daddu       $fp, $s1, $zero
    ctx->pc = 0x367c1cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c20: 0xc0dc4f6  jal         func_3713D8
    ctx->pc = 0x367C20u;
    SET_GPR_U32(ctx, 31, 0x367C28u);
    ctx->pc = 0x367C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C20u;
    // 0x367c24: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3713D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3713D8u, 0x367C20u, 0x367C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C28u;
label_367c28:
    // 0x367c28: 0xc0dd734  jal         func_375CD0
    ctx->pc = 0x367C28u;
    SET_GPR_U32(ctx, 31, 0x367C30u);
    ctx->pc = 0x367C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C28u;
    // 0x367c2c: 0x240401e0  addiu       $a0, $zero, 0x1E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375CD0u, 0x367C28u, 0x367C30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C30u;
label_367c30:
    // 0x367c30: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x367c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x367c34: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C34u;
    SET_GPR_U32(ctx, 31, 0x367C3Cu);
    ctx->pc = 0x367C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C34u;
    // 0x367c38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C34u, 0x367C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C3Cu;
label_367c3c:
    // 0x367c3c: 0x3405fe00  ori         $a1, $zero, 0xFE00
    ctx->pc = 0x367c3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65024);
    // 0x367c40: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x367c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x367c44: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x367c44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x367c48: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x367c48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x367c4c: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x367c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x367c50: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C50u;
    SET_GPR_U32(ctx, 31, 0x367C58u);
    ctx->pc = 0x367C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C50u;
    // 0x367c54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C50u, 0x367C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C58u;
label_367c58:
    // 0x367c58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x367c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367c5c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C5Cu;
    SET_GPR_U32(ctx, 31, 0x367C64u);
    ctx->pc = 0x367C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C5Cu;
    // 0x367c60: 0x24050156  addiu       $a1, $zero, 0x156 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 342));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C5Cu, 0x367C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C64u;
label_367c64:
    // 0x367c64: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x367c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    // 0x367c68: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C68u;
    SET_GPR_U32(ctx, 31, 0x367C70u);
    ctx->pc = 0x367C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C68u;
    // 0x367c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C68u, 0x367C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C70u;
label_367c70:
    // 0x367c70: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x367c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x367c74: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C74u;
    SET_GPR_U32(ctx, 31, 0x367C7Cu);
    ctx->pc = 0x367C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C74u;
    // 0x367c78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C74u, 0x367C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C7Cu;
label_367c7c:
    // 0x367c7c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x367c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x367c80: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x367c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x367c84: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C84u;
    SET_GPR_U32(ctx, 31, 0x367C8Cu);
    ctx->pc = 0x367C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C84u;
    // 0x367c88: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C84u, 0x367C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C8Cu;
label_367c8c:
    // 0x367c8c: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x367c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x367c90: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C90u;
    SET_GPR_U32(ctx, 31, 0x367C98u);
    ctx->pc = 0x367C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C90u;
    // 0x367c94: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C90u, 0x367C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367C98u;
label_367c98:
    // 0x367c98: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x367c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x367c9c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367C9Cu;
    SET_GPR_U32(ctx, 31, 0x367CA4u);
    ctx->pc = 0x367CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367C9Cu;
    // 0x367ca0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367C9Cu, 0x367CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CA4u;
label_367ca4:
    // 0x367ca4: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x367CA4u;
    SET_GPR_U32(ctx, 31, 0x367CACu);
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x367CA4u, 0x367CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CACu;
label_367cac:
    // 0x367cac: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x367cacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x367cb0: 0x8c62dc98  lw          $v0, -0x2368($v1)
    ctx->pc = 0x367cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BDC98u));
    // 0x367cb4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x367CB4u;
    {
        const bool branch_taken_0x367cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CB4u;
        // 0x367cb8: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367cb4) {
            ctx->pc = 0x367CE8u;
            goto label_367ce8;
        }
    }
    ctx->pc = 0x367CBCu;
    // 0x367cbc: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367cc0: 0x24a4dc50  addiu       $a0, $a1, -0x23B0
    ctx->pc = 0x367cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958160));
    // 0x367cc4: 0xc0dc2be  jal         func_370AF8
    ctx->pc = 0x367CC4u;
    SET_GPR_U32(ctx, 31, 0x367CCCu);
    ctx->pc = 0x367CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367CC4u;
    // 0x367cc8: 0x24050d00  addiu       $a1, $zero, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AF8u, 0x367CC4u, 0x367CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CCCu;
label_367ccc:
    // 0x367ccc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x367cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x367cd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367cd4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367cd8: 0x24847a00  addiu       $a0, $a0, 0x7A00
    ctx->pc = 0x367cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31232));
    // 0x367cdc: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x367CDCu;
    SET_GPR_U32(ctx, 31, 0x367CE4u);
    ctx->pc = 0x367CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367CDCu;
    // 0x367ce0: 0xac43dc98  sw          $v1, -0x2368($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958232), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x367CDCu, 0x367CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367CE4u;
label_367ce4:
    // 0x367ce4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x367ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_367ce8:
    // 0x367ce8: 0x8c82dce8  lw          $v0, -0x2318($a0)
    ctx->pc = 0x367ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958312)));
    // 0x367cec: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x367CECu;
    {
        const bool branch_taken_0x367cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367CECu;
        // 0x367cf0: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367cec) {
            ctx->pc = 0x367D20u;
            goto label_367d20;
        }
    }
    ctx->pc = 0x367CF4u;
    // 0x367cf4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367cf8: 0x24a4dca0  addiu       $a0, $a1, -0x2360
    ctx->pc = 0x367cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x367cfc: 0xc0dc2be  jal         func_370AF8
    ctx->pc = 0x367CFCu;
    SET_GPR_U32(ctx, 31, 0x367D04u);
    ctx->pc = 0x367D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367CFCu;
    // 0x367d00: 0x24050d00  addiu       $a1, $zero, 0xD00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AF8u, 0x367CFCu, 0x367D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D04u;
label_367d04:
    // 0x367d04: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x367d04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x367d08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367d0c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367d10: 0x24847a28  addiu       $a0, $a0, 0x7A28
    ctx->pc = 0x367d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31272));
    // 0x367d14: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x367D14u;
    SET_GPR_U32(ctx, 31, 0x367D1Cu);
    ctx->pc = 0x367D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D14u;
    // 0x367d18: 0xac43dce8  sw          $v1, -0x2318($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958312), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x367D14u, 0x367D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D1Cu;
label_367d1c:
    // 0x367d1c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x367d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_367d20:
    // 0x367d20: 0x8c82dd38  lw          $v0, -0x22C8($a0)
    ctx->pc = 0x367d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294958392)));
    // 0x367d24: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x367D24u;
    {
        const bool branch_taken_0x367d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x367D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x367D24u;
        // 0x367d28: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x367d24) {
            ctx->pc = 0x367D58u;
            goto label_367d58;
        }
    }
    ctx->pc = 0x367D2Cu;
    // 0x367d2c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367d30: 0x24a4dcf0  addiu       $a0, $a1, -0x2310
    ctx->pc = 0x367d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958320));
    // 0x367d34: 0xc0dc2be  jal         func_370AF8
    ctx->pc = 0x367D34u;
    SET_GPR_U32(ctx, 31, 0x367D3Cu);
    ctx->pc = 0x367D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D34u;
    // 0x367d38: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370AF8u, 0x367D34u, 0x367D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D3Cu;
label_367d3c:
    // 0x367d3c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x367d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
    // 0x367d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367d44: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367d48: 0x24847a50  addiu       $a0, $a0, 0x7A50
    ctx->pc = 0x367d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31312));
    // 0x367d4c: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x367D4Cu;
    SET_GPR_U32(ctx, 31, 0x367D54u);
    ctx->pc = 0x367D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D4Cu;
    // 0x367d50: 0xac43dd38  sw          $v1, -0x22C8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294958392), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x367D4Cu, 0x367D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D54u;
label_367d54:
    // 0x367d54: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x367d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_367d58:
    // 0x367d58: 0x9082e174  lbu         $v0, -0x1E8C($a0)
    ctx->pc = 0x367d58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959476)));
    // 0x367d5c: 0x544000aa  bnel        $v0, $zero, . + 4 + (0xAA << 2)
    ctx->pc = 0x367D5Cu;
    {
        const bool branch_taken_0x367d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x367d5c) {
            ctx->pc = 0x367D60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x367D5Cu;
            // 0x367d60: 0x3c05005c  lui         $a1, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x368008u;
            goto label_368008;
        }
    }
    ctx->pc = 0x367D64u;
    // 0x367d64: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x367d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x367d68: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367d6c: 0x2470dd40  addiu       $s0, $v1, -0x22C0
    ctx->pc = 0x367d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958400));
    // 0x367d70: 0x2445dc50  addiu       $a1, $v0, -0x23B0
    ctx->pc = 0x367d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958160));
    // 0x367d74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x367d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367d78: 0xc0d9d2e  jal         func_3674B8
    ctx->pc = 0x367D78u;
    SET_GPR_U32(ctx, 31, 0x367D80u);
    ctx->pc = 0x367D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D78u;
    // 0x367d7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3674B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3674B8u, 0x367D78u, 0x367D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D80u;
label_367d80:
    // 0x367d80: 0x3415e800  ori         $s5, $zero, 0xE800
    ctx->pc = 0x367d80u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)59392);
    // 0x367d84: 0x15ad38  dsll        $s5, $s5, 20
    ctx->pc = 0x367d84u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 20);
    // 0x367d88: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x367d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x367d8c: 0x240601a4  addiu       $a2, $zero, 0x1A4
    ctx->pc = 0x367d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x367d90: 0x2445dca0  addiu       $a1, $v0, -0x2360
    ctx->pc = 0x367d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958240));
    // 0x367d94: 0xc0d9d2e  jal         func_3674B8
    ctx->pc = 0x367D94u;
    SET_GPR_U32(ctx, 31, 0x367D9Cu);
    ctx->pc = 0x367D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367D94u;
    // 0x367d98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3674B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3674B8u, 0x367D94u, 0x367D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367D9Cu;
label_367d9c:
    // 0x367d9c: 0x34148000  ori         $s4, $zero, 0x8000
    ctx->pc = 0x367d9cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x367da0: 0x14a3bc  dsll32      $s4, $s4, 14
    ctx->pc = 0x367da0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << (32 + 14));
    // 0x367da4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367da4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367da8: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x367da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x367dac: 0x24a4dcf0  addiu       $a0, $a1, -0x2310
    ctx->pc = 0x367dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958320));
    // 0x367db0: 0x2476e070  addiu       $s6, $v1, -0x1F90
    ctx->pc = 0x367db0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959216));
    // 0x367db4: 0xc0d9dd6  jal         func_367758
    ctx->pc = 0x367DB4u;
    SET_GPR_U32(ctx, 31, 0x367DBCu);
    ctx->pc = 0x367DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DB4u;
    // 0x367db8: 0x24050344  addiu       $a1, $zero, 0x344 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 836));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367758u, 0x367DB4u, 0x367DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DBCu;
label_367dbc:
    // 0x367dbc: 0x2402f800  addiu       $v0, $zero, -0x800
    ctx->pc = 0x367dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x367dc0: 0x267307ff  addiu       $s3, $s3, 0x7FF
    ctx->pc = 0x367dc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2047));
    // 0x367dc4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x367dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x367dc8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x367dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367dcc: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x367dccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
    // 0x367dd0: 0xc0dc52e  jal         func_3714B8
    ctx->pc = 0x367DD0u;
    SET_GPR_U32(ctx, 31, 0x367DD8u);
    ctx->pc = 0x367DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367DD0u;
    // 0x367dd4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714B8u, 0x367DD0u, 0x367DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367DD8u;
label_367dd8:
    // 0x367dd8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x367dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367ddc: 0x3c112930  lui         $s1, 0x2930
    ctx->pc = 0x367ddcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)10544 << 16));
    // 0x367de0: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x367de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x367de4: 0x36318000  ori         $s1, $s1, 0x8000
    ctx->pc = 0x367de4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32768);
    // 0x367de8: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x367de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x367dec: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x367decu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367df0: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x367df0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x367df4: 0x718825  or          $s1, $v1, $s1
    ctx->pc = 0x367df4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x367df8: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x367df8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x367dfc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x367dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367e00: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x367e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x367e04: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367E04u;
    SET_GPR_U32(ctx, 31, 0x367E0Cu);
    ctx->pc = 0x367E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E04u;
    // 0x367e08: 0xb42825  or          $a1, $a1, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367E04u, 0x367E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E0Cu;
label_367e0c:
    // 0x367e0c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x367e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x367e10: 0x132ac3  sra         $a1, $s3, 11
    ctx->pc = 0x367e10u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 19), 11));
    // 0x367e14: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x367e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x367e18: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x367e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x367e1c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367E1Cu;
    SET_GPR_U32(ctx, 31, 0x367E24u);
    ctx->pc = 0x367E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E1Cu;
    // 0x367e20: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367E1Cu, 0x367E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E24u;
label_367e24:
    // 0x367e24: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x367e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x367e28: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x367e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x367e2c: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x367e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
    // 0x367e30: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367E30u;
    SET_GPR_U32(ctx, 31, 0x367E38u);
    ctx->pc = 0x367E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E30u;
    // 0x367e34: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367E30u, 0x367E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E38u;
label_367e38:
    // 0x367e38: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x367e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x367e3c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367E3Cu;
    SET_GPR_U32(ctx, 31, 0x367E44u);
    ctx->pc = 0x367E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E3Cu;
    // 0x367e40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367E3Cu, 0x367E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E44u;
label_367e44:
    // 0x367e44: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x367e44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x367e48: 0x34a50f73  ori         $a1, $a1, 0xF73
    ctx->pc = 0x367e48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3955);
    // 0x367e4c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367E4Cu;
    SET_GPR_U32(ctx, 31, 0x367E54u);
    ctx->pc = 0x367E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E4Cu;
    // 0x367e50: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367E4Cu, 0x367E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E54u;
label_367e54:
    // 0x367e54: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x367E54u;
    SET_GPR_U32(ctx, 31, 0x367E5Cu);
    ctx->pc = 0x367E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E54u;
    // 0x367e58: 0x3c12005c  lui         $s2, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x367E54u, 0x367E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E5Cu;
label_367e5c:
    // 0x367e5c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x367e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e60: 0xc0dc536  jal         func_3714D8
    ctx->pc = 0x367E60u;
    SET_GPR_U32(ctx, 31, 0x367E68u);
    ctx->pc = 0x367E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E60u;
    // 0x367e64: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714D8u, 0x367E60u, 0x367E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E68u;
label_367e68:
    // 0x367e68: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x367e68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x367e6c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367e70: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x367e70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x367e74: 0x2652de50  addiu       $s2, $s2, -0x21B0
    ctx->pc = 0x367e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958672));
    // 0x367e78: 0xaca2de40  sw          $v0, -0x21C0($a1)
    ctx->pc = 0x367e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294958656), GPR_U32(ctx, 2));
    // 0x367e7c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x367e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x367e80: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x367e80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e84: 0xc0dc52e  jal         func_3714B8
    ctx->pc = 0x367E84u;
    SET_GPR_U32(ctx, 31, 0x367E8Cu);
    ctx->pc = 0x367E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367E84u;
    // 0x367e88: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714B8u, 0x367E84u, 0x367E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367E8Cu;
label_367e8c:
    // 0x367e8c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x367e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x367e90: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x367e90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367e94: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x367e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367e98: 0x5297c  dsll32      $a1, $a1, 5
    ctx->pc = 0x367e98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 5));
    // 0x367e9c: 0xb52825  or          $a1, $a1, $s5
    ctx->pc = 0x367e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 21));
    // 0x367ea0: 0x2252825  or          $a1, $s1, $a1
    ctx->pc = 0x367ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
    // 0x367ea4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367EA4u;
    SET_GPR_U32(ctx, 31, 0x367EACu);
    ctx->pc = 0x367EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EA4u;
    // 0x367ea8: 0xb42825  or          $a1, $a1, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367EA4u, 0x367EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EACu;
label_367eac:
    // 0x367eac: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x367eacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x367eb0: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x367eb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x367eb4: 0x34a50068  ori         $a1, $a1, 0x68
    ctx->pc = 0x367eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)104);
    // 0x367eb8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367EB8u;
    SET_GPR_U32(ctx, 31, 0x367EC0u);
    ctx->pc = 0x367EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EB8u;
    // 0x367ebc: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367EB8u, 0x367EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EC0u;
label_367ec0:
    // 0x367ec0: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x367ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x367ec4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367EC4u;
    SET_GPR_U32(ctx, 31, 0x367ECCu);
    ctx->pc = 0x367EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EC4u;
    // 0x367ec8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367EC4u, 0x367ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367ECCu;
label_367ecc:
    // 0x367ecc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x367eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x367ed0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367ED0u;
    SET_GPR_U32(ctx, 31, 0x367ED8u);
    ctx->pc = 0x367ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367ED0u;
    // 0x367ed4: 0x24050f73  addiu       $a1, $zero, 0xF73 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3955));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367ED0u, 0x367ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367ED8u;
label_367ed8:
    // 0x367ed8: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x367ED8u;
    SET_GPR_U32(ctx, 31, 0x367EE0u);
    ctx->pc = 0x367EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367ED8u;
    // 0x367edc: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x367ED8u, 0x367EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EE0u;
label_367ee0:
    // 0x367ee0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x367ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367ee4: 0xc0dc536  jal         func_3714D8
    ctx->pc = 0x367EE4u;
    SET_GPR_U32(ctx, 31, 0x367EECu);
    ctx->pc = 0x367EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367EE4u;
    // 0x367ee8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714D8u, 0x367EE4u, 0x367EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367EECu;
label_367eec:
    // 0x367eec: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x367eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x367ef0: 0x2610df60  addiu       $s0, $s0, -0x20A0
    ctx->pc = 0x367ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958944));
    // 0x367ef4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x367ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x367ef8: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x367ef8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x367efc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x367efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x367f00: 0xac62df50  sw          $v0, -0x20B0($v1)
    ctx->pc = 0x367f00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294958928), GPR_U32(ctx, 2));
    // 0x367f04: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x367f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f08: 0xc0dc52e  jal         func_3714B8
    ctx->pc = 0x367F08u;
    SET_GPR_U32(ctx, 31, 0x367F10u);
    ctx->pc = 0x367F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F08u;
    // 0x367f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714B8u, 0x367F08u, 0x367F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F10u;
label_367f10:
    // 0x367f10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x367f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x367f14: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x367f14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f18: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x367f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367f1c: 0x3197c  dsll32      $v1, $v1, 5
    ctx->pc = 0x367f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 5));
    // 0x367f20: 0x751825  or          $v1, $v1, $s5
    ctx->pc = 0x367f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 21));
    // 0x367f24: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x367f24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x367f28: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367F28u;
    SET_GPR_U32(ctx, 31, 0x367F30u);
    ctx->pc = 0x367F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F28u;
    // 0x367f2c: 0x2342825  or          $a1, $s1, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367F28u, 0x367F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F30u;
label_367f30:
    // 0x367f30: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x367f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x367f34: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367F34u;
    SET_GPR_U32(ctx, 31, 0x367F3Cu);
    ctx->pc = 0x367F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F34u;
    // 0x367f38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367F34u, 0x367F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F3Cu;
label_367f3c:
    // 0x367f3c: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x367F3Cu;
    SET_GPR_U32(ctx, 31, 0x367F44u);
    ctx->pc = 0x367F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F3Cu;
    // 0x367f40: 0x139983  sra         $s3, $s3, 6 (Delay Slot)
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 19), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x367F3Cu, 0x367F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F44u;
label_367f44:
    // 0x367f44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x367f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f48: 0xc0dc536  jal         func_3714D8
    ctx->pc = 0x367F48u;
    SET_GPR_U32(ctx, 31, 0x367F50u);
    ctx->pc = 0x367F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F48u;
    // 0x367f4c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714D8u, 0x367F48u, 0x367F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F50u;
label_367f50:
    // 0x367f50: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x367f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x367f54: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367f58: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x367f58u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x367f5c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x367f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x367f60: 0xaca2e060  sw          $v0, -0x1FA0($a1)
    ctx->pc = 0x367f60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294959200), GPR_U32(ctx, 2));
    // 0x367f64: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x367f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f68: 0xc0dc52e  jal         func_3714B8
    ctx->pc = 0x367F68u;
    SET_GPR_U32(ctx, 31, 0x367F70u);
    ctx->pc = 0x367F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F68u;
    // 0x367f6c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714B8u, 0x367F68u, 0x367F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F70u;
label_367f70:
    // 0x367f70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x367f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x367f74: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x367f74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x367f78: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x367f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x367f7c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x367f7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367f80: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x367f80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x367f84: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x367f84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x367f88: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367F88u;
    SET_GPR_U32(ctx, 31, 0x367F90u);
    ctx->pc = 0x367F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367F88u;
    // 0x367f8c: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367F88u, 0x367F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367F90u;
label_367f90:
    // 0x367f90: 0x3c022800  lui         $v0, 0x2800
    ctx->pc = 0x367f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10240 << 16));
    // 0x367f94: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x367f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x367f98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x367f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x367f9c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x367f9cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
    // 0x367fa0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367FA0u;
    SET_GPR_U32(ctx, 31, 0x367FA8u);
    ctx->pc = 0x367FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FA0u;
    // 0x367fa4: 0x2752825  or          $a1, $s3, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367FA0u, 0x367FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FA8u;
label_367fa8:
    // 0x367fa8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x367fa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x367fac: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x367facu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x367fb0: 0x34a5002a  ori         $a1, $a1, 0x2A
    ctx->pc = 0x367fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42);
    // 0x367fb4: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367FB4u;
    SET_GPR_U32(ctx, 31, 0x367FBCu);
    ctx->pc = 0x367FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FB4u;
    // 0x367fb8: 0x24040042  addiu       $a0, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367FB4u, 0x367FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FBCu;
label_367fbc:
    // 0x367fbc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x367fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x367fc0: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367FC0u;
    SET_GPR_U32(ctx, 31, 0x367FC8u);
    ctx->pc = 0x367FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FC0u;
    // 0x367fc4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367FC0u, 0x367FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FC8u;
label_367fc8:
    // 0x367fc8: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x367fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x367fcc: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x367FCCu;
    SET_GPR_U32(ctx, 31, 0x367FD4u);
    ctx->pc = 0x367FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FCCu;
    // 0x367fd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x367FCCu, 0x367FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FD4u;
label_367fd4:
    // 0x367fd4: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x367FD4u;
    SET_GPR_U32(ctx, 31, 0x367FDCu);
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x367FD4u, 0x367FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FDCu;
label_367fdc:
    // 0x367fdc: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x367fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x367fe0: 0xc0dc536  jal         func_3714D8
    ctx->pc = 0x367FE0u;
    SET_GPR_U32(ctx, 31, 0x367FE8u);
    ctx->pc = 0x367FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x367FE0u;
    // 0x367fe4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3714D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3714D8u, 0x367FE0u, 0x367FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x367FE8u;
label_367fe8:
    // 0x367fe8: 0x561023  subu        $v0, $v0, $s6
    ctx->pc = 0x367fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x367fec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x367fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x367ff0: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x367ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x367ff4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x367ff4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x367ff8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x367ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x367ffc: 0xa0a3e174  sb          $v1, -0x1E8C($a1)
    ctx->pc = 0x367ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294959476), (uint8_t)GPR_U32(ctx, 3));
    // 0x368000: 0xac82e170  sw          $v0, -0x1E90($a0)
    ctx->pc = 0x368000u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BE170u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BE170u, _value); } while (0);
    // 0x368004: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x368004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
label_368008:
    // 0x368008: 0x8fc30004  lw          $v1, 0x4($fp)
    ctx->pc = 0x368008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x36800c: 0x8ca2f910  lw          $v0, -0x6F0($a1)
    ctx->pc = 0x36800cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965520)));
    // 0x368010: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x368010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x368014: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x368014u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x368018: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x368018u;
    {
        const bool branch_taken_0x368018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368018u;
        // 0x36801c: 0xdfa20038  ld          $v0, 0x38($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368018) {
            ctx->pc = 0x36802Cu;
            goto label_36802c;
        }
    }
    ctx->pc = 0x368020u;
    // 0x368020: 0xc0dc442  jal         func_371108
    ctx->pc = 0x368020u;
    SET_GPR_U32(ctx, 31, 0x368028u);
    ctx->pc = 0x368024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368020u;
    // 0x368024: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x368020u, 0x368028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368028u;
label_368028:
    // 0x368028: 0xdfa20038  ld          $v0, 0x38($sp)
    ctx->pc = 0x368028u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_36802c:
    // 0x36802c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36802cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x368030: 0x3c165000  lui         $s6, 0x5000
    ctx->pc = 0x368030u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)20480 << 16));
    // 0x368034: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x368034u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x368038: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x368038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x36803c: 0x34a5034c  ori         $a1, $a1, 0x34C
    ctx->pc = 0x36803cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)844);
    // 0x368040: 0x8c82f910  lw          $v0, -0x6F0($a0)
    ctx->pc = 0x368040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965520)));
    // 0x368044: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x368044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x368048: 0x3c156c00  lui         $s5, 0x6C00
    ctx->pc = 0x368048u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)27648 << 16));
    // 0x36804c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x36804cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x368050: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368054: 0xffa00028  sd          $zero, 0x28($sp)
    ctx->pc = 0x368054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 0));
    // 0x368058: 0xac82f910  sw          $v0, -0x6F0($a0)
    ctx->pc = 0x368058u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965520), GPR_U32(ctx, 2));
    // 0x36805c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x368060: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x368060u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x368064: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x368064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x368068: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x36806c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36806cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x368070: 0xac62f910  sw          $v0, -0x6F0($v1)
    ctx->pc = 0x368070u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x368074: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x368074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x368078: 0x8c43de40  lw          $v1, -0x21C0($v0)
    ctx->pc = 0x368078u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BDE40u));
    // 0x36807c: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x36807cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x368080: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x368080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x368084: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x368084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368088: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x368088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36808c: 0x2470fff0  addiu       $s0, $v1, -0x10
    ctx->pc = 0x36808cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x368090: 0x86202b  sltu        $a0, $a0, $a2
    ctx->pc = 0x368090u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x368094: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x368094u;
    {
        const bool branch_taken_0x368094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x368098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368094u;
        // 0x368098: 0x458825  or          $s1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368094) {
            ctx->pc = 0x3680A4u;
            goto label_3680a4;
        }
    }
    ctx->pc = 0x36809Cu;
    // 0x36809c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x36809Cu;
    SET_GPR_U32(ctx, 31, 0x3680A4u);
    ctx->pc = 0x3680A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36809Cu;
    // 0x3680a0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x36809Cu, 0x3680A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3680A4u;
label_3680a4:
    // 0x3680a4: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x3680a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3680a8: 0x101902  srl         $v1, $s0, 4
    ctx->pc = 0x3680a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x3680ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3680acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3680b0: 0x3c133000  lui         $s3, 0x3000
    ctx->pc = 0x3680b0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)12288 << 16));
    // 0x3680b4: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3680b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3680b8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3680b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3680bc: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x3680bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x3680c0: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x3680c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x3680c4: 0x8ca2f910  lw          $v0, -0x6F0($a1)
    ctx->pc = 0x3680c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x3680c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3680c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3680cc: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x3680ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3680d0: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x3680d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3680d4: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x3680d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x3680d8: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x3680d8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x3680dc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x3680dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x3680e0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3680e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3680e4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3680e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3680e8: 0xac62f910  sw          $v0, -0x6F0($v1)
    ctx->pc = 0x3680e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x3680ec: 0x24460018  addiu       $a2, $v0, 0x18
    ctx->pc = 0x3680ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3680f0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3680f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x3680f4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3680f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x3680f8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3680f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3680fc: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x3680fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x368100: 0xac62f910  sw          $v0, -0x6F0($v1)
    ctx->pc = 0x368100u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x368104: 0x8c83de40  lw          $v1, -0x21C0($a0)
    ctx->pc = 0x368104u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BDE40u));
    // 0x368108: 0x8ca2df50  lw          $v0, -0x20B0($a1)
    ctx->pc = 0x368108u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BDF50u));
    // 0x36810c: 0x2474034c  addiu       $s4, $v1, 0x34C
    ctx->pc = 0x36810cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 844));
    // 0x368110: 0x8fc50004  lw          $a1, 0x4($fp)
    ctx->pc = 0x368110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x368114: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x368114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x368118: 0x2952025  or          $a0, $s4, $s5
    ctx->pc = 0x368118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) | GPR_U64(ctx, 21));
    // 0x36811c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x36811cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x368120: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x368120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x368124: 0x2450fff0  addiu       $s0, $v0, -0x10
    ctx->pc = 0x368124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x368128: 0xc5302b  sltu        $a2, $a2, $a1
    ctx->pc = 0x368128u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x36812c: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x36812Cu;
    {
        const bool branch_taken_0x36812c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x368130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36812Cu;
        // 0x368130: 0x648825  or          $s1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36812c) {
            ctx->pc = 0x36813Cu;
            goto label_36813c;
        }
    }
    ctx->pc = 0x368134u;
    // 0x368134: 0xc0dc442  jal         func_371108
    ctx->pc = 0x368134u;
    SET_GPR_U32(ctx, 31, 0x36813Cu);
    ctx->pc = 0x368138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368134u;
    // 0x368138: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x368134u, 0x36813Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36813Cu;
label_36813c:
    // 0x36813c: 0xdfa20048  ld          $v0, 0x48($sp)
    ctx->pc = 0x36813cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x368140: 0x101902  srl         $v1, $s0, 4
    ctx->pc = 0x368140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x368144: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x368144u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x368148: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x368148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x36814c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x36814cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x368150: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x368150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368154: 0x8ca2f910  lw          $v0, -0x6F0($a1)
    ctx->pc = 0x368154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294965520)));
    // 0x368158: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x368158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x36815c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x36815cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x368160: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x368160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x368164: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x368164u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x368168: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x368168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x36816c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x36816cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368170: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x368170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x368174: 0xaca2f910  sw          $v0, -0x6F0($a1)
    ctx->pc = 0x368174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965520), GPR_U32(ctx, 2));
    // 0x368178: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x368178u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x36817c: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x36817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x368180: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368184: 0xac62f910  sw          $v0, -0x6F0($v1)
    ctx->pc = 0x368184u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x368188: 0x8c83df50  lw          $v1, -0x20B0($a0)
    ctx->pc = 0x368188u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BDF50u));
    // 0x36818c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x36818cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x368190: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x368190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x368194: 0x8c82e060  lw          $v0, -0x1FA0($a0)
    ctx->pc = 0x368194u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BE060u));
    // 0x368198: 0x2839021  addu        $s2, $s4, $v1
    ctx->pc = 0x368198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x36819c: 0x2552025  or          $a0, $s2, $s5
    ctx->pc = 0x36819cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 21));
    // 0x3681a0: 0xa6282b  sltu        $a1, $a1, $a2
    ctx->pc = 0x3681a0u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x3681a4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3681a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3681a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3681a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3681ac: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x3681acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x3681b0: 0x2450fff0  addiu       $s0, $v0, -0x10
    ctx->pc = 0x3681b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x3681b4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3681B4u;
    {
        const bool branch_taken_0x3681b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3681B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3681B4u;
        // 0x3681b8: 0x648825  or          $s1, $v1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3681b4) {
            ctx->pc = 0x3681C4u;
            goto label_3681c4;
        }
    }
    ctx->pc = 0x3681BCu;
    // 0x3681bc: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3681BCu;
    SET_GPR_U32(ctx, 31, 0x3681C4u);
    ctx->pc = 0x3681C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3681BCu;
    // 0x3681c0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3681BCu, 0x3681C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3681C4u;
label_3681c4:
    // 0x3681c4: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x3681c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3681c8: 0x101902  srl         $v1, $s0, 4
    ctx->pc = 0x3681c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x3681cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3681ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3681d0: 0x11303c  dsll32      $a2, $s1, 0
    ctx->pc = 0x3681d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) << (32 + 0));
    // 0x3681d4: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x3681d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3681d8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3681d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3681dc: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x3681dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x3681e0: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x3681e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x3681e4: 0x8ca2f910  lw          $v0, -0x6F0($a1)
    ctx->pc = 0x3681e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x3681e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3681e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3681ec: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x3681ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x3681f0: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x3681f0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x3681f4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3681f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3681f8: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3681f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x3681fc: 0xaca2f910  sw          $v0, -0x6F0($a1)
    ctx->pc = 0x3681fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x368200: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x368200u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x368204: 0x24450018  addiu       $a1, $v0, 0x18
    ctx->pc = 0x368204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x368208: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x36820c: 0xac62f910  sw          $v0, -0x6F0($v1)
    ctx->pc = 0x36820cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x368210: 0x8c83e170  lw          $v1, -0x1E90($a0)
    ctx->pc = 0x368210u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BE170u));
    // 0x368214: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x368214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x368218: 0x8c44e060  lw          $a0, -0x1FA0($v0)
    ctx->pc = 0x368218u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5BE060u));
    // 0x36821c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x36821cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x368220: 0x8fc60004  lw          $a2, 0x4($fp)
    ctx->pc = 0x368220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x368224: 0x244b821  addu        $s7, $s2, $a0
    ctx->pc = 0x368224u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x368228: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x368228u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36822c: 0x2f52025  or          $a0, $s7, $s5
    ctx->pc = 0x36822cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) | GPR_U64(ctx, 21));
    // 0x368230: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x368230u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x368234: 0x448825  or          $s1, $v0, $a0
    ctx->pc = 0x368234u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x368238: 0xa6282b  sltu        $a1, $a1, $a2
    ctx->pc = 0x368238u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x36823c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x36823Cu;
    {
        const bool branch_taken_0x36823c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x368240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36823Cu;
        // 0x368240: 0x2470fff0  addiu       $s0, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36823c) {
            ctx->pc = 0x36824Cu;
            goto label_36824c;
        }
    }
    ctx->pc = 0x368244u;
    // 0x368244: 0xc0dc442  jal         func_371108
    ctx->pc = 0x368244u;
    SET_GPR_U32(ctx, 31, 0x36824Cu);
    ctx->pc = 0x368248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368244u;
    // 0x368248: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x368244u, 0x36824Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36824Cu;
label_36824c:
    // 0x36824c: 0xdfa50030  ld          $a1, 0x30($sp)
    ctx->pc = 0x36824cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x368250: 0x101902  srl         $v1, $s0, 4
    ctx->pc = 0x368250u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x368254: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x368254u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x368258: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x368258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x36825c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x36825cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x368260: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x368260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x368264: 0x932025  or          $a0, $a0, $s3
    ctx->pc = 0x368264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 19));
    // 0x368268: 0x8ca2f910  lw          $v0, -0x6F0($a1)
    ctx->pc = 0x368268u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x36826c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x36826cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x368270: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x368270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x368274: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x368274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x368278: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x368278u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x36827c: 0x2466dc50  addiu       $a2, $v1, -0x23B0
    ctx->pc = 0x36827cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958160));
    // 0x368280: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368284: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x368284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x368288: 0xac82f910  sw          $v0, -0x6F0($a0)
    ctx->pc = 0x368288u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x36828c: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x36828cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x368290: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x368290u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x368294: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368298: 0xac82f910  sw          $v0, -0x6F0($a0)
    ctx->pc = 0x368298u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF910u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF910u, _value); } while (0);
    // 0x36829c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x36829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3682a0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3682a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3682a4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3682A4u;
    {
        const bool branch_taken_0x3682a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3682A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682A4u;
        // 0x3682a8: 0x8cd0000c  lw          $s0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682a4) {
            ctx->pc = 0x3682B4u;
            goto label_3682b4;
        }
    }
    ctx->pc = 0x3682ACu;
    // 0x3682ac: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3682ACu;
    SET_GPR_U32(ctx, 31, 0x3682B4u);
    ctx->pc = 0x3682B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682ACu;
    // 0x3682b0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3682ACu, 0x3682B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3682B4u;
label_3682b4:
    // 0x3682b4: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x3682b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x3682b8: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3682b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3682bc: 0x24a4dca0  addiu       $a0, $a1, -0x2360
    ctx->pc = 0x3682bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958240));
    // 0x3682c0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3682c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x3682c4: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x3682c4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3682c8: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x3682c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x3682cc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3682ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3682d0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3682d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3682d4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3682d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3682d8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3682d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3682dc: 0x24430018  addiu       $v1, $v0, 0x18
    ctx->pc = 0x3682dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3682e0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x3682e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x3682e4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3682e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3682e8: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3682e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3682ec: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x3682ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x3682f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3682f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3682f4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3682F4u;
    {
        const bool branch_taken_0x3682f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3682F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3682F4u;
        // 0x3682f8: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3682f4) {
            ctx->pc = 0x368304u;
            goto label_368304;
        }
    }
    ctx->pc = 0x3682FCu;
    // 0x3682fc: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3682FCu;
    SET_GPR_U32(ctx, 31, 0x368304u);
    ctx->pc = 0x368300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3682FCu;
    // 0x368300: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3682FCu, 0x368304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368304u;
label_368304:
    // 0x368304: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x368304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x368308: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x368308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x36830c: 0x24a4dcf0  addiu       $a0, $a1, -0x2310
    ctx->pc = 0x36830cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958320));
    // 0x368310: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x368310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x368314: 0xdfa50028  ld          $a1, 0x28($sp)
    ctx->pc = 0x368314u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x368318: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x368318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x36831c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x36831cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x368320: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x368320u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x368324: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368328: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x368328u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x36832c: 0x24430058  addiu       $v1, $v0, 0x58
    ctx->pc = 0x36832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x368330: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x368330u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x368334: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368338: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x368338u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x36833c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x36833cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x368340: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x368340u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x368344: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x368344u;
    {
        const bool branch_taken_0x368344 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x368348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368344u;
        // 0x368348: 0x8c90000c  lw          $s0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368344) {
            ctx->pc = 0x368354u;
            goto label_368354;
        }
    }
    ctx->pc = 0x36834Cu;
    // 0x36834c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x36834Cu;
    SET_GPR_U32(ctx, 31, 0x368354u);
    ctx->pc = 0x368350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36834Cu;
    // 0x368350: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x36834Cu, 0x368354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368354u;
label_368354:
    // 0x368354: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x368354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x368358: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x368358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x36835c: 0x761825  or          $v1, $v1, $s6
    ctx->pc = 0x36835cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
    // 0x368360: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x368360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x368364: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x368364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x368368: 0x3406d808  ori         $a2, $zero, 0xD808
    ctx->pc = 0x368368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55304);
    // 0x36836c: 0x633fc  dsll32      $a2, $a2, 15
    ctx->pc = 0x36836cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 15));
    // 0x368370: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x368370u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x368374: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x368374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x368378: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x368378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x36837c: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x36837cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x368380: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x368380u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x368384: 0x246ee070  addiu       $t6, $v1, -0x1F90
    ctx->pc = 0x368384u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959216));
    // 0x368388: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x368388u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x36838c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x36838cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x368390: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x368390u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x368394: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x368394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x368398: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x368398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x36839c: 0x24460010  addiu       $a2, $v0, 0x10
    ctx->pc = 0x36839cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3683a0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x3683a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x3683a4: 0x24470014  addiu       $a3, $v0, 0x14
    ctx->pc = 0x3683a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x3683a8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3683a8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3683ac: 0x240301a4  addiu       $v1, $zero, 0x1A4
    ctx->pc = 0x3683acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 420));
    // 0x3683b0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x3683b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x3683b4: 0x24480018  addiu       $t0, $v0, 0x18
    ctx->pc = 0x3683b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3683b8: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x3683b8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x3683bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3683bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3683c0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x3683c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x3683c4: 0x2444001c  addiu       $a0, $v0, 0x1C
    ctx->pc = 0x3683c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28));
    // 0x3683c8: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x3683c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x3683cc: 0x24030344  addiu       $v1, $zero, 0x344
    ctx->pc = 0x3683ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 836));
    // 0x3683d0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x3683d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x3683d4: 0x24490020  addiu       $t1, $v0, 0x20
    ctx->pc = 0x3683d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3683d8: 0xafc80000  sw          $t0, 0x0($fp)
    ctx->pc = 0x3683d8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 8));
    // 0x3683dc: 0x2403034c  addiu       $v1, $zero, 0x34C
    ctx->pc = 0x3683dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 844));
    // 0x3683e0: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x3683e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
    // 0x3683e4: 0x244a0024  addiu       $t2, $v0, 0x24
    ctx->pc = 0x3683e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x3683e8: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x3683e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
    // 0x3683ec: 0x244b0028  addiu       $t3, $v0, 0x28
    ctx->pc = 0x3683ecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x3683f0: 0xac54001c  sw          $s4, 0x1C($v0)
    ctx->pc = 0x3683f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 20));
    // 0x3683f4: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x3683f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x3683f8: 0xafc90000  sw          $t1, 0x0($fp)
    ctx->pc = 0x3683f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 9));
    // 0x3683fc: 0x244c002c  addiu       $t4, $v0, 0x2C
    ctx->pc = 0x3683fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x368400: 0xac520020  sw          $s2, 0x20($v0)
    ctx->pc = 0x368400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 18));
    // 0x368404: 0x244d0030  addiu       $t5, $v0, 0x30
    ctx->pc = 0x368404u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x368408: 0xafca0000  sw          $t2, 0x0($fp)
    ctx->pc = 0x368408u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 10));
    // 0x36840c: 0x24460034  addiu       $a2, $v0, 0x34
    ctx->pc = 0x36840cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x368410: 0xac570024  sw          $s7, 0x24($v0)
    ctx->pc = 0x368410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 23));
    // 0x368414: 0x24470038  addiu       $a3, $v0, 0x38
    ctx->pc = 0x368414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
    // 0x368418: 0xafcb0000  sw          $t3, 0x0($fp)
    ctx->pc = 0x368418u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 11));
    // 0x36841c: 0xac430028  sw          $v1, 0x28($v0)
    ctx->pc = 0x36841cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
    // 0x368420: 0xafcc0000  sw          $t4, 0x0($fp)
    ctx->pc = 0x368420u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 12));
    // 0x368424: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x368424u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x368428: 0xafcd0000  sw          $t5, 0x0($fp)
    ctx->pc = 0x368428u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 13));
    // 0x36842c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x36842cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x368430: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x368430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x368434: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x368434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
    // 0x368438: 0xafc70000  sw          $a3, 0x0($fp)
    ctx->pc = 0x368438u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 7));
    // 0x36843c: 0xc0d9e78  jal         func_3679E0
    ctx->pc = 0x36843Cu;
    SET_GPR_U32(ctx, 31, 0x368444u);
    ctx->pc = 0x368440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36843Cu;
    // 0x368440: 0x8dc40020  lw          $a0, 0x20($t6) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3679E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3679E0u, 0x36843Cu, 0x368444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368444u;
label_368444:
    // 0x368444: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x368444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x368448: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x368448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36844c: 0x2483dd40  addiu       $v1, $a0, -0x22C0
    ctx->pc = 0x36844cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958400));
    // 0x368450: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x368450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x368454: 0xc0d9e78  jal         func_3679E0
    ctx->pc = 0x368454u;
    SET_GPR_U32(ctx, 31, 0x36845Cu);
    ctx->pc = 0x368458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368454u;
    // 0x368458: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3679E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3679E0u, 0x368454u, 0x36845Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36845Cu;
label_36845c:
    // 0x36845c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x36845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x368460: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x368460u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x368464: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x368464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x368468: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x368468u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x36846c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x36846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x368470: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x368470u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x368474: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x368474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x368478: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x368478u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x36847c: 0x2464001c  addiu       $a0, $v1, 0x1C
    ctx->pc = 0x36847cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
    // 0x368480: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x368480u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x368484: 0x2465000c  addiu       $a1, $v1, 0xC
    ctx->pc = 0x368484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x368488: 0xafc60000  sw          $a2, 0x0($fp)
    ctx->pc = 0x368488u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 6));
    // 0x36848c: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x36848cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
    // 0x368490: 0xafc50000  sw          $a1, 0x0($fp)
    ctx->pc = 0x368490u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 5));
    // 0x368494: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x368494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x368498: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x368498u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x36849c: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36849Cu;
    {
        const bool branch_taken_0x36849c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x36849c) {
            ctx->pc = 0x3684A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36849Cu;
            // 0x3684a0: 0x8fc20000  lw          $v0, 0x0($fp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3684B0u;
            goto label_3684b0;
        }
    }
    ctx->pc = 0x3684A4u;
    // 0x3684a4: 0xc0dc442  jal         func_371108
    ctx->pc = 0x3684A4u;
    SET_GPR_U32(ctx, 31, 0x3684ACu);
    ctx->pc = 0x3684A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3684A4u;
    // 0x3684a8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x3684A4u, 0x3684ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3684ACu;
label_3684ac:
    // 0x3684ac: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x3684acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_3684b0:
    // 0x3684b0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3684b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3684b4: 0x34058800  ori         $a1, $zero, 0x8800
    ctx->pc = 0x3684b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x3684b8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3684b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3684bc: 0x34a5a000  ori         $a1, $a1, 0xA000
    ctx->pc = 0x3684bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)40960);
    // 0x3684c0: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3684c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3684c4: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x3684c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x3684c8: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x3684c8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x3684cc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x3684ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x3684d0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x3684d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3684d4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x3684d4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
    // 0x3684d8: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x3684d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x3684dc: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x3684dcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x3684e0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x3684e0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
    // 0x3684e4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3684e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x3684e8: 0x8c43ed78  lw          $v1, -0x1288($v0)
    ctx->pc = 0x3684e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BED78u));
    // 0x3684ec: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x3684ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3684f0: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x3684F0u;
    {
        const bool branch_taken_0x3684f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3684F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3684F0u;
        // 0x3684f4: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3684f0) {
            ctx->pc = 0x3685E0u;
            goto label_3685e0;
        }
    }
    ctx->pc = 0x3684F8u;
    // 0x3684f8: 0x3402d500  ori         $v0, $zero, 0xD500
    ctx->pc = 0x3684f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)54528);
    // 0x3684fc: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x3684fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
    // 0x368500: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x368500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368504: 0x8fb50020  lw          $s5, 0x20($sp)
    ctx->pc = 0x368504u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x368508: 0x51940  sll         $v1, $a1, 5
    ctx->pc = 0x368508u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x36850c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x36850cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x368510: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x368510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x368514: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x368514u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x368518: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x368518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36851c: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x36851cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x368520: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x368520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x368524: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x368524u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x368528: 0x241300ff  addiu       $s3, $zero, 0xFF
    ctx->pc = 0x368528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36852c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x36852cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x368530: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x368530u;
    SET_GPR_U32(ctx, 31, 0x368538u);
    ctx->pc = 0x368534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368530u;
    // 0x368534: 0x24160064  addiu       $s6, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x368530u, 0x368538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368538u;
label_368538:
    // 0x368538: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x368538u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36853c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x36853cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x368540: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x368540u;
    SET_GPR_U32(ctx, 31, 0x368548u);
    ctx->pc = 0x368544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368540u;
    // 0x368544: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x368540u, 0x368548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368548u;
label_368548:
    // 0x368548: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x368548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
    // 0x36854c: 0x2a2a025  or          $s4, $s5, $v0
    ctx->pc = 0x36854cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
label_368550:
    // 0x368550: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x368550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x368554: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x368554u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x368558: 0x0  nop
    ctx->pc = 0x368558u;
    // NOP
    // 0x36855c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36855cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x368560: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x368560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x368564: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x368564u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x368568: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x368568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x36856c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x36856Cu;
    {
        const bool branch_taken_0x36856c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x368570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36856Cu;
        // 0x368570: 0x132827  nor         $a1, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36856c) {
            ctx->pc = 0x3685C0u;
            goto label_3685c0;
        }
    }
    ctx->pc = 0x368574u;
    // 0x368574: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x368574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x368578: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x368578u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x36857c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x36857Cu;
    SET_GPR_U32(ctx, 31, 0x368584u);
    ctx->pc = 0x368580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36857Cu;
    // 0x368580: 0x2852825  or          $a1, $s4, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x36857Cu, 0x368584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368584u;
label_368584:
    // 0x368584: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x368584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x368588: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x368588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x36858c: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x36858Cu;
    SET_GPR_U32(ctx, 31, 0x368594u);
    ctx->pc = 0x368590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36858Cu;
    // 0x368590: 0xb62825  or          $a1, $a1, $s6 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x36858Cu, 0x368594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368594u;
label_368594:
    // 0x368594: 0xc0dd84e  jal         func_376138
    ctx->pc = 0x368594u;
    SET_GPR_U32(ctx, 31, 0x36859Cu);
    ctx->pc = 0x376138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376138u, 0x368594u, 0x36859Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36859Cu;
label_36859c:
    // 0x36859c: 0xc0f0620  jal         func_3C1880
    ctx->pc = 0x36859Cu;
    SET_GPR_U32(ctx, 31, 0x3685A4u);
    ctx->pc = 0x3C1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1880u, 0x36859Cu, 0x3685A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685A4u;
label_3685a4:
    // 0x3685a4: 0xc0f0620  jal         func_3C1880
    ctx->pc = 0x3685A4u;
    SET_GPR_U32(ctx, 31, 0x3685ACu);
    ctx->pc = 0x3685A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685A4u;
    // 0x3685a8: 0x3050000f  andi        $s0, $v0, 0xF (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C1880u, 0x3685A4u, 0x3685ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685ACu;
label_3685ac:
    // 0x3685ac: 0x3046000f  andi        $a2, $v0, 0xF
    ctx->pc = 0x3685acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3685b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3685b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3685b4: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x3685b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x3685b8: 0xc0d9e22  jal         func_367888
    ctx->pc = 0x3685B8u;
    SET_GPR_U32(ctx, 31, 0x3685C0u);
    ctx->pc = 0x3685BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685B8u;
    // 0x3685bc: 0x2444f910  addiu       $a0, $v0, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367888u, 0x3685B8u, 0x3685C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685C0u;
label_3685c0:
    // 0x3685c0: 0x118a03  sra         $s1, $s1, 8
    ctx->pc = 0x3685c0u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 8));
    // 0x3685c4: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3685c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x3685c8: 0x641ffe1  bgez        $s2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3685C8u;
    {
        const bool branch_taken_0x3685c8 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x3685CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3685C8u;
        // 0x3685cc: 0x139a00  sll         $s3, $s3, 8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3685c8) {
            ctx->pc = 0x368550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368550;
        }
    }
    ctx->pc = 0x3685D0u;
    // 0x3685d0: 0x3c05000a  lui         $a1, 0xA
    ctx->pc = 0x3685d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)10 << 16));
    // 0x3685d4: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x3685d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3685d8: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x3685D8u;
    SET_GPR_U32(ctx, 31, 0x3685E0u);
    ctx->pc = 0x3685DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685D8u;
    // 0x3685dc: 0x2a52825  or          $a1, $s5, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x3685D8u, 0x3685E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685E0u;
label_3685e0:
    // 0x3685e0: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x3685e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x3685e4: 0xc0dc196  jal         func_370658
    ctx->pc = 0x3685E4u;
    SET_GPR_U32(ctx, 31, 0x3685ECu);
    ctx->pc = 0x3685E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685E4u;
    // 0x3685e8: 0x2484f8c8  addiu       $a0, $a0, -0x738 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370658u, 0x3685E4u, 0x3685ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685ECu;
label_3685ec:
    // 0x3685ec: 0xc0dd716  jal         func_375C58
    ctx->pc = 0x3685ECu;
    SET_GPR_U32(ctx, 31, 0x3685F4u);
    ctx->pc = 0x375C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C58u, 0x3685ECu, 0x3685F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685F4u;
label_3685f4:
    // 0x3685f4: 0xc0dd726  jal         func_375C98
    ctx->pc = 0x3685F4u;
    SET_GPR_U32(ctx, 31, 0x3685FCu);
    ctx->pc = 0x3685F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3685F4u;
    // 0x3685f8: 0x24043fff  addiu       $a0, $zero, 0x3FFF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C98u, 0x3685F4u, 0x3685FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3685FCu;
label_3685fc:
    // 0x3685fc: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x3685fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x368600: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x368600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x368604: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x368604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x368608: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x368608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36860c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x36860cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x368610: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x368610u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x368614: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x368614u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x368618: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x368618u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x36861c: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x36861cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x368620: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x368620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x368624: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x368624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x368628: 0x3e00008  jr          $ra
    ctx->pc = 0x368628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36862Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368628u;
        // 0x36862c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x368628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x368630u;
    // 0x368630: 0x0  nop
    ctx->pc = 0x368630u;
    // NOP
    // 0x368634: 0x0  nop
    ctx->pc = 0x368634u;
    // NOP
    ctx->pc = 0x368638u;
}
