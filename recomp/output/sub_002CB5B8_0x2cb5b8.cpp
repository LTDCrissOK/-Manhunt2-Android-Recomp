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

// Function: sub_002CB5B8
// Address: 0x2cb5b8 - 0x2cb870
void sub_002CB5B8_0x2cb5b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB5B8_0x2cb5b8");
#endif

    switch (ctx->pc) {
        case 0x2cb608u: goto label_2cb608;
        case 0x2cb63cu: goto label_2cb63c;
        case 0x2cb73cu: goto label_2cb73c;
        case 0x2cb750u: goto label_2cb750;
        case 0x2cb75cu: goto label_2cb75c;
        case 0x2cb770u: goto label_2cb770;
        case 0x2cb77cu: goto label_2cb77c;
        case 0x2cb784u: goto label_2cb784;
        case 0x2cb798u: goto label_2cb798;
        case 0x2cb7a4u: goto label_2cb7a4;
        case 0x2cb7b4u: goto label_2cb7b4;
        case 0x2cb7d4u: goto label_2cb7d4;
        case 0x2cb7e4u: goto label_2cb7e4;
        case 0x2cb7fcu: goto label_2cb7fc;
        case 0x2cb804u: goto label_2cb804;
        case 0x2cb80cu: goto label_2cb80c;
        case 0x2cb814u: goto label_2cb814;
        case 0x2cb820u: goto label_2cb820;
        case 0x2cb82cu: goto label_2cb82c;
        case 0x2cb838u: goto label_2cb838;
        case 0x2cb840u: goto label_2cb840;
        default: break;
    }

    ctx->pc = 0x2cb5b8u;

    // 0x2cb5b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cb5b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cb5bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2cb5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2cb5c0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2cb5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2cb5c4: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x2cb5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2cb5c8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2cb5c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2cb5cc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2cb5ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5d0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2cb5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2cb5d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2cb5d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5d8: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2cb5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2cb5dc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2cb5dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5e0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2cb5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2cb5e4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2cb5e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb5e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2cb5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2cb5ec: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2cb5ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x2cb5f0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2cb5f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2cb5f4: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2cb5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x2cb5f8: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2cb5f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x2cb5fc: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2cb5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2cb600: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x2CB600u;
    SET_GPR_U32(ctx, 31, 0x2CB608u);
    ctx->pc = 0x2CB604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB600u;
    // 0x2cb604: 0x3c120067  lui         $s2, 0x67 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x2CB600u, 0x2CB608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB608u;
label_2cb608:
    // 0x2cb608: 0x3c030047  lui         $v1, 0x47
    ctx->pc = 0x2cb608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)71 << 16));
    // 0x2cb60c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2cb60cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb610: 0x246409b8  addiu       $a0, $v1, 0x9B8
    ctx->pc = 0x2cb610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2488));
    // 0x2cb614: 0xdc6509b8  ld          $a1, 0x9B8($v1)
    ctx->pc = 0x2cb614u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x4709B8u));
    // 0x2cb618: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2cb618u;
    SET_GPR_U64(ctx, 6, FAST_READ64(0x4709C0u));
    // 0x2cb61c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2cb61cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2cb620: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2cb620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2cb624: 0x27d6000f  addiu       $s6, $fp, 0xF
    ctx->pc = 0x2cb624u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 30), 15));
    // 0x2cb628: 0xffa50010  sd          $a1, 0x10($sp)
    ctx->pc = 0x2cb628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 5));
    // 0x2cb62c: 0x2c2b024  and         $s6, $s6, $v0
    ctx->pc = 0x2cb62cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & GPR_U64(ctx, 2));
    // 0x2cb630: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x2cb630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x2cb634: 0xc0e1458  jal         func_385160
    ctx->pc = 0x2CB634u;
    SET_GPR_U32(ctx, 31, 0x2CB63Cu);
    ctx->pc = 0x2CB638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB634u;
    // 0x2cb638: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385160u, 0x2CB634u, 0x2CB63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB63Cu;
label_2cb63c:
    // 0x2cb63c: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cb63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb640: 0x700024a9  por         $a0, $zero, $zero
    ctx->pc = 0x2cb640u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2cb644: 0x24068000  addiu       $a2, $zero, -0x8000
    ctx->pc = 0x2cb644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x2cb648: 0x240c0008  addiu       $t4, $zero, 0x8
    ctx->pc = 0x2cb648u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2cb64c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2cb64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cb650: 0x103fc2  srl         $a3, $s0, 31
    ctx->pc = 0x2cb650u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 16), 31));
    // 0x2cb654: 0x7c643110  sq          $a0, 0x3110($v1)
    ctx->pc = 0x2cb654u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 12560), GPR_VEC(ctx, 4));
    // 0x2cb658: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x2cb658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x2cb65c: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x2cb65cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cb660: 0x260a001f  addiu       $t2, $s0, 0x1F
    ctx->pc = 0x2cb660u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x2cb664: 0x8e25b4a8  lw          $a1, -0x4B58($s1)
    ctx->pc = 0x2cb664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb668: 0x73843  sra         $a3, $a3, 1
    ctx->pc = 0x2cb668u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 1));
    // 0x2cb66c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2cb66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb670: 0x24eb001f  addiu       $t3, $a3, 0x1F
    ctx->pc = 0x2cb670u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 7), 31));
    // 0x2cb674: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2cb674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2cb678: 0x24e7003e  addiu       $a3, $a3, 0x3E
    ctx->pc = 0x2cb678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 62));
    // 0x2cb67c: 0xdca33110  ld          $v1, 0x3110($a1)
    ctx->pc = 0x2cb67cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 12560)));
    // 0x2cb680: 0x2610003e  addiu       $s0, $s0, 0x3E
    ctx->pc = 0x2cb680u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 62));
    // 0x2cb684: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2cb684u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cb688: 0x17b93a  dsrl        $s7, $s7, 4
    ctx->pc = 0x2cb688u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) >> 4);
    // 0x2cb68c: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x2cb68cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2cb690: 0xf7b7c  dsll32      $t7, $t7, 13
    ctx->pc = 0x2cb690u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 13));
    // 0x2cb694: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x2cb694u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x2cb698: 0x2418fff0  addiu       $t8, $zero, -0x10
    ctx->pc = 0x2cb698u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2cb69c: 0x6c1825  or          $v1, $v1, $t4
    ctx->pc = 0x2cb69cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 12));
    // 0x2cb6a0: 0x8a302a  slt         $a2, $a0, $t2
    ctx->pc = 0x2cb6a0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x2cb6a4: 0xfca33110  sd          $v1, 0x3110($a1)
    ctx->pc = 0x2cb6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 12560), GPR_U64(ctx, 3));
    // 0x2cb6a8: 0x8b202a  slt         $a0, $a0, $t3
    ctx->pc = 0x2cb6a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x2cb6ac: 0x164380b  movn        $a3, $t3, $a0
    ctx->pc = 0x2cb6acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 11));
    // 0x2cb6b0: 0x146800b  movn        $s0, $t2, $a2
    ctx->pc = 0x2cb6b0u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 10));
    // 0x2cb6b4: 0x8e25b4a8  lw          $a1, -0x4B58($s1)
    ctx->pc = 0x2cb6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb6b8: 0x108143  sra         $s0, $s0, 5
    ctx->pc = 0x2cb6b8u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 5));
    // 0x2cb6bc: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x2cb6bcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
    // 0x2cb6c0: 0x240e000e  addiu       $t6, $zero, 0xE
    ctx->pc = 0x2cb6c0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2cb6c4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x2cb6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x2cb6c8: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x2cb6c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2cb6cc: 0xdca33110  ld          $v1, 0x3110($a1)
    ctx->pc = 0x2cb6ccu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 12560)));
    // 0x2cb6d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2cb6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6d4: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x2cb6d4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
    // 0x2cb6d8: 0x73d80  sll         $a3, $a3, 22
    ctx->pc = 0x2cb6d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 22));
    // 0x2cb6dc: 0x6d1825  or          $v1, $v1, $t5
    ctx->pc = 0x2cb6dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 13));
    // 0x2cb6e0: 0x354a3120  ori         $t2, $t2, 0x3120
    ctx->pc = 0x2cb6e0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)12576);
    // 0x2cb6e4: 0xfca33110  sd          $v1, 0x3110($a1)
    ctx->pc = 0x2cb6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 12560), GPR_U64(ctx, 3));
    // 0x2cb6e8: 0x14a400  sll         $s4, $s4, 16
    ctx->pc = 0x2cb6e8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 20), 16));
    // 0x2cb6ec: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2cb6ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cb6f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb6f4: 0x8e24b4a8  lw          $a0, -0x4B58($s1)
    ctx->pc = 0x2cb6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb6f8: 0x143403  sra         $a2, $s4, 16
    ctx->pc = 0x2cb6f8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 20), 16));
    // 0x2cb6fc: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x2cb6fcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x2cb700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb704: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x2cb704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x2cb708: 0xdc823110  ld          $v0, 0x3110($a0)
    ctx->pc = 0x2cb708u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 12560)));
    // 0x2cb70c: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x2cb70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x2cb710: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x2cb710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x2cb714: 0xfc823110  sd          $v0, 0x3110($a0)
    ctx->pc = 0x2cb714u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 12560), GPR_U64(ctx, 2));
    // 0x2cb718: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cb718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb71c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2cb71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cb720: 0xdc623118  ld          $v0, 0x3118($v1)
    ctx->pc = 0x2cb720u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 12568)));
    // 0x2cb724: 0x581024  and         $v0, $v0, $t8
    ctx->pc = 0x2cb724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 24));
    // 0x2cb728: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x2cb728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x2cb72c: 0xfc623118  sd          $v0, 0x3118($v1)
    ctx->pc = 0x2cb72cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 12568), GPR_U64(ctx, 2));
    // 0x2cb730: 0x8e24b4a8  lw          $a0, -0x4B58($s1)
    ctx->pc = 0x2cb730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb734: 0xc0ee9a8  jal         func_3BA6A0
    ctx->pc = 0x2CB734u;
    SET_GPR_U32(ctx, 31, 0x2CB73Cu);
    ctx->pc = 0x2CB738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB734u;
    // 0x2cb738: 0x8a2021  addu        $a0, $a0, $t2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA6A0u, 0x2CB734u, 0x2CB73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB73Cu;
label_2cb73c:
    // 0x2cb73c: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cb73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb740: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cb740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb744: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2cb744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cb748: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x2CB748u;
    SET_GPR_U32(ctx, 31, 0x2CB750u);
    ctx->pc = 0x2CB74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB748u;
    // 0x2cb74c: 0xfc603140  sd          $zero, 0x3140($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 12608), GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x2CB748u, 0x2CB750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB750u;
label_2cb750:
    // 0x2cb750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb754: 0xc0e0f66  jal         func_383D98
    ctx->pc = 0x2CB754u;
    SET_GPR_U32(ctx, 31, 0x2CB75Cu);
    ctx->pc = 0x2CB758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB754u;
    // 0x2cb758: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383D98u, 0x2CB754u, 0x2CB75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB75Cu;
label_2cb75c:
    // 0x2cb75c: 0x8e23b4a8  lw          $v1, -0x4B58($s1)
    ctx->pc = 0x2cb75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948008)));
    // 0x2cb760: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cb760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cb764: 0x34843110  ori         $a0, $a0, 0x3110
    ctx->pc = 0x2cb764u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12560);
    // 0x2cb768: 0xc0eea22  jal         func_3BA888
    ctx->pc = 0x2CB768u;
    SET_GPR_U32(ctx, 31, 0x2CB770u);
    ctx->pc = 0x2CB76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB768u;
    // 0x2cb76c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA888u, 0x2CB768u, 0x2CB770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB770u;
label_2cb770:
    // 0x2cb770: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb774: 0xc0e3c92  jal         func_38F248
    ctx->pc = 0x2CB774u;
    SET_GPR_U32(ctx, 31, 0x2CB77Cu);
    ctx->pc = 0x2CB778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB774u;
    // 0x2cb778: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F248u, 0x2CB774u, 0x2CB77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB77Cu;
label_2cb77c:
    // 0x2cb77c: 0xc0e3c96  jal         func_38F258
    ctx->pc = 0x2CB77Cu;
    SET_GPR_U32(ctx, 31, 0x2CB784u);
    ctx->pc = 0x2CB780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB77Cu;
    // 0x2cb780: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F258u, 0x2CB77Cu, 0x2CB784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB784u;
label_2cb784:
    // 0x2cb784: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb788: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2cb788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb78c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cb78cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb790: 0xc0e3cf4  jal         func_38F3D0
    ctx->pc = 0x2CB790u;
    SET_GPR_U32(ctx, 31, 0x2CB798u);
    ctx->pc = 0x2CB794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB790u;
    // 0x2cb794: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F3D0u, 0x2CB790u, 0x2CB798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB798u;
label_2cb798:
    // 0x2cb798: 0x7ba50010  lq          $a1, 0x10($sp)
    ctx->pc = 0x2cb798u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb79c: 0xc0e3d18  jal         func_38F460
    ctx->pc = 0x2CB79Cu;
    SET_GPR_U32(ctx, 31, 0x2CB7A4u);
    ctx->pc = 0x2CB7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB79Cu;
    // 0x2cb7a0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F460u, 0x2CB79Cu, 0x2CB7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7A4u;
label_2cb7a4:
    // 0x2cb7a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cb7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7ac: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CB7ACu;
    SET_GPR_U32(ctx, 31, 0x2CB7B4u);
    ctx->pc = 0x2CB7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7ACu;
    // 0x2cb7b0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CB7ACu, 0x2CB7B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7B4u;
label_2cb7b4:
    // 0x2cb7b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2cb7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb7b8: 0x139a38  dsll        $s3, $s3, 8
    ctx->pc = 0x2cb7b8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << 8);
    // 0x2cb7bc: 0x539825  or          $s3, $v0, $s3
    ctx->pc = 0x2cb7bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x2cb7c0: 0x15ac38  dsll        $s5, $s5, 16
    ctx->pc = 0x2cb7c0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 16);
    // 0x2cb7c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7c8: 0x2753025  or          $a2, $s3, $s5
    ctx->pc = 0x2cb7c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 19) | GPR_U64(ctx, 21));
    // 0x2cb7cc: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CB7CCu;
    SET_GPR_U32(ctx, 31, 0x2CB7D4u);
    ctx->pc = 0x2CB7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7CCu;
    // 0x2cb7d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CB7CCu, 0x2CB7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7D4u;
label_2cb7d4:
    // 0x2cb7d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb7d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2cb7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2cb7dc: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CB7DCu;
    SET_GPR_U32(ctx, 31, 0x2CB7E4u);
    ctx->pc = 0x2CB7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7DCu;
    // 0x2cb7e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CB7DCu, 0x2CB7E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7E4u;
label_2cb7e4:
    // 0x2cb7e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2cb7e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb7e8: 0x3406b400  ori         $a2, $zero, 0xB400
    ctx->pc = 0x2cb7e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)46080);
    // 0x2cb7ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2cb7ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2cb7f0: 0x34c62d00  ori         $a2, $a2, 0x2D00
    ctx->pc = 0x2cb7f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)11520);
    // 0x2cb7f4: 0xc0e3d52  jal         func_38F548
    ctx->pc = 0x2CB7F4u;
    SET_GPR_U32(ctx, 31, 0x2CB7FCu);
    ctx->pc = 0x2CB7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7F4u;
    // 0x2cb7f8: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F548u, 0x2CB7F4u, 0x2CB7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB7FCu;
label_2cb7fc:
    // 0x2cb7fc: 0xc0e3d1e  jal         func_38F478
    ctx->pc = 0x2CB7FCu;
    SET_GPR_U32(ctx, 31, 0x2CB804u);
    ctx->pc = 0x2CB800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB7FCu;
    // 0x2cb800: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F478u, 0x2CB7FCu, 0x2CB804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB804u;
label_2cb804:
    // 0x2cb804: 0xc0e3c9a  jal         func_38F268
    ctx->pc = 0x2CB804u;
    SET_GPR_U32(ctx, 31, 0x2CB80Cu);
    ctx->pc = 0x2CB808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB804u;
    // 0x2cb808: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F268u, 0x2CB804u, 0x2CB80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB80Cu;
label_2cb80c:
    // 0x2cb80c: 0xc0f2708  jal         func_3C9C20
    ctx->pc = 0x2CB80Cu;
    SET_GPR_U32(ctx, 31, 0x2CB814u);
    ctx->pc = 0x2CB810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB80Cu;
    // 0x2cb810: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C9C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9C20u, 0x2CB80Cu, 0x2CB814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB814u;
label_2cb814:
    // 0x2cb814: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cb814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb818: 0xc0e0f66  jal         func_383D98
    ctx->pc = 0x2CB818u;
    SET_GPR_U32(ctx, 31, 0x2CB820u);
    ctx->pc = 0x2CB81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB818u;
    // 0x2cb81c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383D98u, 0x2CB818u, 0x2CB820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB820u;
label_2cb820:
    // 0x2cb820: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2cb820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2cb824: 0xc0e1466  jal         func_385198
    ctx->pc = 0x2CB824u;
    SET_GPR_U32(ctx, 31, 0x2CB82Cu);
    ctx->pc = 0x2CB828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB824u;
    // 0x2cb828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x385198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x385198u, 0x2CB824u, 0x2CB82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB82Cu;
label_2cb82c:
    // 0x2cb82c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2cb82cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb830: 0xc0e0f66  jal         func_383D98
    ctx->pc = 0x2CB830u;
    SET_GPR_U32(ctx, 31, 0x2CB838u);
    ctx->pc = 0x2CB834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB830u;
    // 0x2cb834: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x383D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383D98u, 0x2CB830u, 0x2CB838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB838u;
label_2cb838:
    // 0x2cb838: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x2CB838u;
    SET_GPR_U32(ctx, 31, 0x2CB840u);
    ctx->pc = 0x2CB83Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB838u;
    // 0x2cb83c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x2CB838u, 0x2CB840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB840u;
label_2cb840:
    // 0x2cb840: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2cb840u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb844: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2cb844u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cb848: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2cb848u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb84c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2cb84cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb850: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2cb850u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cb854: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2cb854u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2cb858: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2cb858u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cb85c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2cb85cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2cb860: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2cb860u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cb864: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2cb864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2cb868: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB868u;
        // 0x2cb86c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB870u;
}
